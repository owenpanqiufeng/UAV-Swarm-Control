;; Auto-generated. Do not edit!


(when (boundp 'apm::send_msg)
  (if (not (find-package "APM"))
    (make-package "APM"))
  (shadow 'send_msg (find-package "APM")))
(unless (find-package "APM::SEND_MSG")
  (make-package "APM::SEND_MSG"))

(in-package "ROS")
;;//! \htmlinclude send_msg.msg.html


(defclass apm::send_msg
  :super ros::object
  :slots (_send_msg ))

(defmethod apm::send_msg
  (:init
   (&key
    ((:send_msg __send_msg) (make-array 259 :initial-element 0 :element-type :char))
    )
   (send-super :init)
   (setq _send_msg __send_msg)
   self)
  (:send_msg
   (&optional __send_msg)
   (if __send_msg (setq _send_msg __send_msg)) _send_msg)
  (:serialization-length
   ()
   (+
    ;; uint8[259] _send_msg
    (* 1    259)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8[259] _send_msg
     (princ _send_msg s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8[259] _send_msg
   (setq _send_msg (make-array 259 :element-type :char))
   (replace _send_msg buf :start2 ptr-) (incf ptr- 259)
   ;;
   self)
  )

(setf (get apm::send_msg :md5sum-) "c80dcf834ebc4faedd2627bb33ad2ae3")
(setf (get apm::send_msg :datatype-) "apm/send_msg")
(setf (get apm::send_msg :definition-)
      "uint8[259] send_msg
")



(provide :apm/send_msg "c80dcf834ebc4faedd2627bb33ad2ae3")

