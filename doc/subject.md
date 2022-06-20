파파고 번역

# 목차
1.[개요](#webserv)
2.[서론](#chapter-i)
3.[일반 규칙](#chapter-ii)
4.[필수 파트](#chapter-iii)
5.[보너스 파트](#chapter-iv)
6.[제출 및 동료 평가](#chapter-v)

# Webserv
웹 서버

## This is when you finally understand why a URL starts with HTTP
이 때 비로소 URL이 HTTP로 시작하는 이유를 알 수 있습니다.<br/>

Summary:
요약:

This project is about writing your ow HTTP server.<br/>
이 프로젝트는 HTTP 서버를 직접 작성하는 것입니다.<br/>

You will be able to test it with an actual browser.<br/>
실제 브라우저로 테스트할 수 있습니다.<br/>

HTTP is one of the most used protocols on the internet.<br/>
HTTP는 인터넷에서 가장 많이 사용되는 프로토콜 중 하나입니다.<br/>

Knowing its arcane will be useful, even if you won’t be working on a website.<br/>
당신이 웹사이트에서 일하지 않더라도 그것의 난해함을 아는 것은 유용할 것이다.<br/>

Version: 19
버전: 19


## Chapter I
제 1장

## Introduction
서론<br/>

The Hypertext Transfer Protocol (HTTP) is an application protocol for distributed, collaborative, hypermedia information systems.<br/>
HTTP(Hypertext Transfer Protocol)는 하이퍼미디어 정보 시스템을 위한 애플리케이션 프로토콜이다.<br/>

HTTP is the foundation of data communication for the World Wide Web, where hypertext documents include hyperlinks to other resources that the user can easily access.<br/>
HTTP는 사용자가 쉽게 접근할 수 있는 다른 자원에 대한 하이퍼링크를 포함하는 월드 와이드 웹의 데이터 통신의 기반이다.<br/>

For example, by a mouse click or by tapping the screen in a web browser.<br/>
예를 들어 마우스를 클릭하거나 웹 브라우저에서 화면을 탭하면 됩니다.<br/>

HTTP was developed to facilitate hypertext and the World Wide Web.<br/>
HTTP는 하이퍼텍스트와 월드 와이드 웹을 용이하게 하기 위해 개발되었다.<br/>

The primary function of a web server is to store, process, and deliver web pages to clients.<br/>
웹 서버의 주요 기능은 웹 페이지를 저장, 처리 및 클라이언트에 전달하는 것입니다.<br/>

The communication between client and server takes place using the Hypertext Transfer Protocol (HTTP).<br/>
클라이언트와 서버 간의 통신은 HTTP(Hypertext Transfer Protocol)를 사용하여 이루어집니다.<br/>

Pages delivered are most frequently HTML documents, which may include images, style sheets, and scripts in addition to the text content.<br/>
전달되는 페이지는 HTML 문서이며 텍스트 내용 외에도 이미지, 스타일시트 및 스크립트를 포함할 수 있습니다.<br/>

Multiple web servers may be used for a high-traffic website.<br/>
트래픽이 많은 웹 사이트에 여러 웹 서버를 사용할 수 있습니다.<br/>

A user agent, commonly a web browser or web crawler, initiates communication by requesting a specific resource using HTTP and the server responds with the content of that resource or an error message if unable to do so.<br/>
일반적으로 웹 브라우저 또는 웹 크롤러인 사용자 에이전트는 HTTP를 사용하여 특정 리소스를 요청함으로써 통신을 시작하고 서버는 해당 리소스의 콘텐츠나 오류 메시지로 응답합니다.<br/>

The resource is typically a real file on the server’s secondary storage, but this is not necessarily the case and depends on how the webserver is implemented.<br/>
리소스는 일반적으로 서버의 보조 저장소에 있는 실제 파일이지만 반드시 그런 것은 아니며 웹 서버가 구현되는 방식에 따라 다릅니다.<br/>

While the primary function is to serve content, full implementation of HTTP also includes ways of receiving content from clients.<br/>
주요 기능은 콘텐츠를 제공하는 것이지만 HTTP의 완전한 구현에는 클라이언트로부터 콘텐츠를 수신하는 방법도 포함됩니다.<br/>

This feature is used for submitting web forms, including the uploading of files.<br/>
이 기능은 파일 업로드를 포함하여 웹 양식을 제출하는 데 사용됩니다.<br/>



## Chapter II
제 2장


## General rules
일반 규칙<br/>

• Your program should not crash in any circumstances (even when it runs out of memory), and should not quit unexpectedly.<br/>
• 프로그램은 메모리가 부족할 경우에도 충돌하지 않아야 하며 예기치 않게 종료되지 않아야 합니다.<br/>

If it happens, your project will be considered non-functional and your grade will be 0.<br/>
이 경우 프로젝트가 작동하지 않는 것으로 간주되며 성적은 0이 됩니다.<br/>

• You have to turn in a Makefile which will compile your source files.<br/> It must not relink.<br/>
• 소스 파일을 컴파일할 Make 파일을 제출해야 합니다.<br/> relink되면 안 됩니다.<br/>

• Your Makefile must at least contain the rules: $(NAME), all, clean, fclean and re.<br/>
• Makefile에는 적어도 $(NAME), all, clean, fclean 및 re와 같은 규칙이 포함되어야 합니다.<br/>

• Compile your code with c++ and the flags -Wall -Wextra -Werror
• c++ 및 플래그 - Wall -Wextra -Werror로 코드를 컴파일합니다.<br/>

• Your code must comply with the C++ 98 standard.<br/>
• 코드는 C++ 98 표준을 준수해야 합니다.<br/>

Then, it should still compile if you add the flag -std=c++98.<br/>
그런 다음 플래그 -flag=c++98을 추가하면 컴파일됩니다.<br/>

• Try to always develop using the most C++ features you can (for example, choose <cstring> over <string.<br/>h>).<br/>
• 항상 최대한의 C++ 기능을 사용하여 개발하도록 하십시오(예: <string.<br/>h> 대신 <cstring>을 선택하십시오.<br/>).<br/>

You are allowed to use C functions, but always prefer their C++ versions if possible.<br/>
C 함수를 사용할 수 있지만 가능하면 항상 C++ 버전을 선호합니다.<br/>

• Any external library and Boost libraries are forbidden.<br/>
• 외부 라이브러리 및 Boost 라이브러리는 사용할 수 없습니다.<br/>


## Chapter III
제 3장

## Mandatory part
필수부품<br/>

Program name : webserv
프로그램 이름 : webserv

Turn in files : Makefile, *.<br/>{h, hpp}, *.<br/>cpp, *.<br/>tpp, *.<br/>ipp, configuration files
파일 제출: Makefile, *.<br/>{h, hpp}, *.<br/>cpp, *.<br/>tpp, *.<br/>ipp, 구성 파일

Makefile : NAME, all, clean, fclean, re

Arguments : [A configuration file]
인수: [A 구성 파일]

External functs : Everything in C++ 98.<br/>
외부 함수 : C++ 98에 있는 모든 것.<br/>

htons, htonl, ntohs, ntohl, select, poll, epoll
(epoll_create, epoll_ctl, epoll_wait), kqueue
(kqueue, kevent), socket, accept, listen, send,
recv, bind, connect, inet_addr, setsockopt,
getsockname, fcntl

Libft authorized : n/a
Libft 승인 : 해당사항 없음

Description : A HTTP server in C++ 98
설명 : C++ 98의 HTTP 서버

You must write a HTTP server in C++ 98.<br/>
HTTP 서버를 C++ 98로 작성해야 합니다.<br/>

Your executable will be run as follows:
실행 파일은 다음과 같이 실행됩니다.<br/>

`.<br/>/webserv [configuration file]`
`.<br/>/webserv [구성 파일]`



>파란색 느낌표
>Even if poll() is mentionned in the subject and the evaluation scale, you can use any equivalent such as select(), kqueue(), or epoll().<br/>
>>대상 및 평가 척도에 poll()이 언급되더라도, select(), kqueue() 또는 epoll()과 같은 동등한 기능을 사용할 수 있습니다.<br/>

>빨간색 느낌표
>Please read the RFC and do some tests with telnet and NGINX before starting this project.<br/>
>이 프로젝트를 시작하기 전에 RFC를 읽고 텔넷과 NGINX를 사용하여 몇 가지 테스트를 수행하십시오.<br/>
>
>[RFC](https://developer.<br/>mozilla.<br/>org/ko/docs/Web/HTTP)

Even if you don’t have to implement all the RFC, reading it will help you develop the required features.<br/>
모든 RFC를 구현할 필요는 없더라도 RFC를 읽으면 필요한 기능을 개발하는 데 도움이 됩니다.<br/>


### III.1 Requirements
1 요구사항<br/>

• Your program has to take a configuration file as argument, or use a default path.<br/>
• 프로그램에서 구성 파일을 인수로 사용하거나 기본 경로를 사용해야 합니다.<br/>

• You can’t execve another web server.<br/>
• 다른 웹 서버를 실행할 수 없습니다.<br/>

• Your server must never block and the client can be bounced properly if necessary.<br/>
• 서버가 차단되면 안 되며, 필요한 경우 클라이언트를 제대로 바운스할 수 있습니다.<br/>

• It must be non-blocking and use only 1 poll() (or equivalent) for all the I/O operations between the client and the server (listen included).<br/>
• 차단되지 않아야 하며 클라이언트와 서버 간의 모든 I/O 작업(수신 포함)에 대해 1개의  poll()(또는 동등)만 사용해야 합니다.<br/>

• poll() (or equivalent) must check read and write at the same time.<br/>
• poll() (또는 동등한 값)는 읽기와 쓰기를 동시에 확인해야 합니다.<br/>

• You must never do a read or a write operation without going through poll() (or equivalent).<br/>
• poll() (또는 동등한 값)을 거치지 않고 읽기 또는 쓰기 작업을 수행해서는 안 됩니다.<br/>

• Checking the value of errno is strictly forbidden after a read or a write operation.<br/>
• 읽기 또는 쓰기 작업 후에는 errno 값을 확인할 수 없습니다.<br/>

• You don’t need to use poll() (or equivalent) before reading your configuration file
• 구성 파일을 읽기 전에 poll()을 사용할 필요가 없습니다.<br/>

>빨간색 느낌표
>Because you have to use non-blocking file descriptors, it is possible to use read/recv or write/send functions with no poll() (or equivalent), and your server wouldn’t be blocking.<br/>
>비차단 파일 설명자를 사용해야 하므로, poll()(또는 동등한 기능) 없이 읽기/복구 또는 쓰기/전송 기능을 사용할 수 있으며, 서버가 차단되지 않습니다.<br/>
>
>But it would consume more system resources.<br/>
>그러나 시스템 리소스가 더 많이 소모될 수 있습니다.<br/>
>
>Thus, if you try to read/recv or write/send in any file descriptor without using poll() (or equivalent), your grade will be 0.<br/>
>따라서 poll()(또는 동등한 기능)을 사용하지 않고 파일 설명자를 읽거나/recv하거나 쓰기/전송하려고 하면 등급이 0이 됩니다.<br/>


• You can use every macro and define like FD_SET, FD_CLR, FD_ISSET, FD_ZERO (understanding what and how they do it is very useful).<br/>
• 모든 매크로를 사용하여 FD_SET, FD_CLR, FD_ISSET, FD_ZERO와 같이 정의할 수 있습니다(이러한 매크로가 무엇을 어떻게 수행하는지 이해하는 것이 매우 유용합니다.<br/>

• A request to your server should never hang forever.<br/>
• 서버에 대한 요청이 영원히 중단되어서는 안 됩니다.<br/>

• Your server must be compatible with the web browser of your choice.<br/>
• 서버가 선택한 웹 브라우저와 호환되어야 합니다.<br/>

• We will consider that NGINX is HTTP 1.<br/>1 compliant and may be used to compare headers and answer behaviors.<br/>
• NGINX는 HTTP 1.<br/>1을 준수하며 헤더를 비교하고 동작에 응답하는 데 사용될 수 있음을 고려할 것이다.<br/>

• Your HTTP response status codes must be accurate.<br/>
• HTTP 응답 상태 코드가 정확해야 합니다.<br/>

• You server must have default error pages if none are provided.<br/>
• 제공된 오류 페이지가 없는 경우 서버에 기본 오류 페이지가 있어야 합니다.<br/>

• You can’t use fork for something else than CGI (like PHP, or Python, and so forth).<br/>
• CGI(PHP, Python 등) 이외의 용도로는 포크를 사용할 수 없습니다.<br/>

• You must be able to serve a fully static website.<br/>
• 완전히 정적인 웹 사이트를 제공할 수 있어야 합니다.<br/>

• Clients must be able to upload files.<br/>
• 클라이언트가 파일을 업로드할 수 있어야 합니다.<br/>

• You need at least GET, POST, and DELETE methods.<br/>
• 적어도 GET, POST 및 DELETE 메서드가 필요합니다.<br/>

• Stress tests your server.<br/> It must stay available at all cost.<br/>
• 서버를 스트레스 테스트 해야합니다.<br/> 어떤 대가를 치르더라도 그것은 이용 가능해야 한다.<br/>

• Your server must be able to listen to multiple ports (see Configuration file).<br/>
• 서버가 여러 포트를 수신할 수 있어야 합니다(구성 파일 참조).<br/>


### III.2 For MacOS only
2 MacOS 전용<br/>

>파란색 느낌표
>Since MacOS doesn’t implement write() the same way as other Unix OSes, you are allowed to use fcntl().<br/>
>MacOS는 다른 Unix OS와 같은 방식으로 write()를 구현하지 않으므로 fcntl()을 사용할 수 있습니다.<br/>
>
>You must use file descriptors in non-blocking mode in order to get a behavior similar to the one of other Unix OSes.<br/>
>다른 유닉스 OS와 유사한 동작을 수행하려면 비차단 모드에서 파일 설명자를 사용해야 합니다.<br/>


>빨간색 느낌표
>However, you are allowed to use fcntl() only as follows:
>그러나 다음과 같은 경우에만 fcntl()을 사용할 수 있습니다.<br/>
>`fcntl(fd, F_SETFL, O_NONBLOCK);`
>Any other flag is forbidden.<br/>
>다른 깃발은 금지되어 있습니다.<br/>


### III.<br/>3 Configuration file
3 구성 파일<br/>

>노란색 전구
>You can get some inspiration from the ’server’ part of NGINX configuration file.<br/>
>NGINX 구성 파일의 '서버' 부분에서 영감을 얻을 수 있습니다.<br/>

In the configuration file, you should be able to:
구성 파일에서 다음을 수행할 수 있어야 합니다.<br/>

• Choose the port and host of each ’server’.<br/>
• 각 '서버'의 포트와 호스트를 선택합니다.<br/>

• Setup the server_names or not.<br/>
• server_names를 설정할지 여부를 지정합니다.<br/>

• The first server for a host:port will be the default for this host:port (that means it will answer to all the requests that don’t belong to an other server).<br/>
• host:port의 첫 번째 서버는 이 host:port의 기본 서버가 됩니다.<br/> 즉, 다른 서버에 속하지 않는 모든 요청에 응답합니다.<br/>

• Setup default error pages.<br/>
• 기본 오류 페이지를 설정합니다.<br/>

• Limit client body size.<br/>
• 클라이언트 본문 크기를 제한합니다.<br/>

• Setup routes with one or multiple of the following rules/configuration (routes wont be using regexp):
• 다음 규칙/구성 중 하나 이상을 사용하여 경로를 설정합니다(경로는 regexp를 사용하지 않음).<br/>

    ◦ Define a list of accepted HTTP methods for the route.<br/>
    ◦ 경로에 대해 허용되는 HTTP 메서드 목록을 정의합니다.<br/>

    ◦ Define a directory or a file from where the file should be searched (for example, if url `/kapouet` is rooted to `/tmp/www`, `url` `/kapouet/pouic/toto/pouet` is `/tmp/www/pouic/toto/pouet`).<br/>
    ◦ 파일을 검색할 디렉토리 또는 파일을 정의합니다(예: url `/kapouet`이 `/tmp/www`로 루팅된 경우 `url` `/kapouet/pouic/to/pouet`은 `/tmp/www/pouic/to/pouet`입니다).<br/>
    
    ◦ Turn on or off directory listing.<br/>
    ◦ 디렉토리 목록을 설정하거나 해제합니다.<br/>

    ◦ Set a default file to answer if the request is a directory.<br/>
    ◦ 요청이 디렉토리인 경우 응답할 기본 파일을 설정합니다.<br/>

    ◦ Execute CGI based on certain file extension (for example .<br/>php).<br/>
    ◦ 특정 파일 확장명(예: .<br/>php)을 기반으로 CGI를 실행합니다.<br/>

    ◦ Make the route able to accept uploaded files and configure where they should be saved.<br/>
    ◦ 업로드된 파일을 받아들일 수 있도록 경로를 설정하고 파일을 저장할 위치를 구성합니다.<br/>

        ∗ Do you wonder what a CGI is?
        ∗ CGI가 무엇인지 궁금합니까?

        ∗ Because you won’t call the CGI directly, use the full path as PATH_INFO.<br/>
        ∗ CGI를 직접 호출하지 않으므로 전체 경로를 PATH_INFO로 사용하십시오.<br/>

        ∗ Just remember that, for chunked request, your server needs to unchunked it and the CGI will expect EOF as end of the body.<br/>
        ∗ 청크된 요청의 경우 서버가 해당 요청을 취소해야 하며 CGI는 본문의 끝으로 EOF를 기대합니다.<br/>

        ∗ Same things for the output of the CGI.<br/> If no content_length is returned from the CGI, EOF will mark the end of the returned data.<br/>
        ∗ CGI의 출력도 마찬가지입니다.<br/> CGI에서 content_length가 반환되지 않으면 EOF는 반환된 데이터의 끝을 표시합니다.<br/>

        ∗ Your program should call the CGI with the file requested as first argument.<br/>
        ∗ 당신의 프로그램은 첫 번째 인수로 요청한 파일을 가지고 CGI를 호출해야 한다.<br/>
        
        ∗ The CGI should be run in the correct directory for relative path file access.<br/>
        ∗ CGI는 상대 경로 파일 액세스를 위해 올바른 디렉토리에서 실행되어야 합니다.<br/>
        
        ∗ Your server should work with one CGI (php-CGI, Python, and so forth).<br/>
        ∗ 서버는 하나의 CGI(php-CGI, Python 등)와 함께 작동해야 합니다.<br/>

You must provide some configuration files and default basic files to test and demonstrate every feature works during evaluation.<br/>
평가 중에 모든 기능이 작동하는지 테스트하고 시연하려면 일부 구성 파일과 기본 기본 파일을 제공해야 합니다.<br/>

>파란색 느낌표
>If you’ve got a question about one behavior, you should compare your program behavior with NGINX’s.<br/>
>한 가지 동작에 대한 질문이 있으면 프로그램 동작을 NGINX의 동작과 비교해야 합니다.<br/>
>
>For example, check how does server_name work.<br/>
>예를 들어 server_name의 작동 방식을 확인합니다.<br/>
>
>We’ve shared with you a small tester.<br/>
>작은 테스터를 공유했습니다.<br/>
>
>It’s not mandatory to pass it if everything works fine with your browser and tests, but it can help you hunt some bugs.<br/>
>브라우저와 테스트에서 모든 것이 제대로 작동한다면 반드시 통과해야 하는 것은 아니지만, 일부 버그를 사냥하는 데 도움이 될 수 있습니다.<br/>



>빨간색 느낌표
>The important thing is resilience.<br/> Your server should never die.<br/>
>중요한 것은 회복력이다.<br/> 서버가 중단되면 안 됩니다.<br/>



>빨간색 느낌표
>Do not test with only one program.<br/>
>하나의 프로그램으로만 테스트하지 마십시오.<br/>
>
>Write your tests with a more convenient language such as Python or Golang, and so forth.<br/>
>Python이나 Golang과 같은 더 편리한 언어로 테스트를 작성하십시오.<br/> 
>
>Even in C or C++ if you want to.<br/>
>당신이 원한다면 C나 C++에서도요.<br/>




## Chapter IV
제 4장

## Bonus part
보너스 파트<br/>

Here are the extra features you can add:
추가할 수 있는 추가 기능은 다음과 같습니다.<br/>

• Support cookies and session management (prepare quick examples).<br/>
• 쿠키 및 세션 관리를 지원합니다(간단한 예 준비).<br/>

• Handle multiple CGI.<br/>
• 여러 CGI를 처리합니다.<br/>

>빨간색 느낌표
>The bonus part will only be assessed if the mandatory part is PERFECT.<br/>
>보너스 부분은 필수 부분이 완벽한 경우에만 평가됩니다.<br/>
>
>Perfect means the mandatory part has been integrally done and works without malfunctioning.<br/>
>완벽은 필수 부품이 일체적으로 수행되었으며 오작동 없이 작동함을 의미합니다.<br/>
>
>If you have not passed ALL the mandatory requirements, your bonus part will not be evaluated at all.<br/>
>필수 요건을 모두 충족하지 못한 경우 보너스 부분은 전혀 평가되지 않습니다.<br/>




## Chapter V
제 5장

## Submission and peer-evaluation
제출 및 동료 평가<br/>

Turn in your assignment in your Git repository as usual.<br/>
평소처럼 Git 저장소에 과제를 제출합니다.<br/>

Only the work inside your repository will be evaluated during the defense.<br/>
방어 중에는 리포지토리 내부의 작업만 평가됩니다.<br/>

Don’t hesitate to double check the names of your files to ensure they are correct.<br/>
파일 이름을 두 번 확인하여 파일 이름이 올바른지 확인하십시오.<br/>
