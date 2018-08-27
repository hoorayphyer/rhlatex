(defun cdlatex-server ()
  (interactive)
  (start-process "my-process" "my-buffer" "/home/hooray/codes/cdlatex/server/bin/server")

  (accept-process-output nil 20)

  (process-send-string "my-process" "1\n")
  (process-send-string "my-process" "abc\n")

  (delete-process "my-process")
)
