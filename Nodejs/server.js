// var http = require("http");
// http.createServer(function (request, response) {
//     response.writeHead(200, { 'content-Type': 'text' });
//     response.end('Hello World\n');
// }).listen(8081);
// console.log('Server running at http://127.0.0.1:8081/');

const http = require("http");
const fs = require("fs");
const port = 8080;

const server =  http.createServer(function(request,response)
{
    response.writeHead(200,{ 'Content-Type': 'text/html' });
    fs.readFile("sample.html", function(error, data){
        if(error){
            response.writeHead(404);
            response.write("Error 404 : Page Not Found");
        }
        else{
            response.write(data);
        }
        response.end();
    });


    // response.write("Hello World");
});
server.listen(port,function(error){
    if(error){
        console.log("Something Went Wrong",error);
    }
    else{
        console.log("Server is running at port :", +port);
    }
});