; ===================
; This file is intended as an EXAMPLE.
; Copy it to resources/site.make to include it in your builds.
; ===================

api = 2
core = 7.x

; ===================
; Contributed modules
; ===================


projects[feeds][subdir] = "contrib"
projects[feeds][version] = "2.0-beta3"

projects[feeds_et][subdir] = "contrib"
projects[feeds_et][version] = "1.x-dev"

projects[feeds_tamper][subdir] = "contrib"
projects[feeds][tamper] = "1.1"

projects[media_feeds][subdir] = "contrib"
projects[media_feeds][version] = "2.x-dev"

projects[entityreference_feeds][subdir] = "contrib"
projects[entityreference_feeds][version] = "1.0-beta3"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta12"

projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.2"

projects[better_exposed_filters][subdir] = "contrib"
projects[better_exposed_filters][version] = "3.2"


; =========
; Libraries
; =========


; ======
; Themes
; ======
