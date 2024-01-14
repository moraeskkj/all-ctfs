# Proxed

they give a file .tar.gz and an link to webserver

when you unzip the file, you got a dockerfile and two .go files, i think that the main.go is the source code of the web page.

$ cat /cmd/secret_server/main.go

the output show me the code and i see the validations of the web server and what i need to do to show the flag 

what is important here is:

 if ip != "31.33.33.7" {
            message := fmt.Sprintf("untrusted IP: %s", ip)
            http.Error(w, message, http.StatusForbidden)
            return
        } else {
            w.Write([]byte(os.Getenv("FLAG")))
        }

this ip var come from a X-Forwarded-For header request, so what i do was run burpsuit and add:

X-Forwarded-For: 31.33.33.7

and i got the flag


