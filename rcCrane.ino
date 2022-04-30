symbol down = c.3
symbol up = c.4
symbol BRAKEr = b.3
symbol GOr = b.2
symbol GOl = b.0
symbol BRAKEl = b.1
main:
kbin [1000, main], b1
if b1 = $75 then
low c.4
low c.3
low b.1
low b.3
high b.0
high b.2
end if
if b1 = $73 then
low b.0
low b.2
low b.1
low b.3
low c.4
low c.3
end if
if b1 = $74 then
low c.4
low c.3
low b.3
high b.1
end if
if b1 = $6B then
low c.4
low c.3
low b.1
high b.3
end if
if b1 = $72 then
low c.4
low c.3
low b.0
low b.2
high b.1
high b.3
end if
if b1 = $1D then
low b.0
low b.2
low b.1
low b.3
low c.4
for b2 = 1 to 3
high c.3
pause 25
low c.3
pause 5
high c.3
pause 20
low c.3
pause 5
next b2
end if
if b1 = $1B then
low b.0
low b.2
low b.1
low b.3
low c.3
for b1 = 1 to 3
high c.4
pause 15
low c.4
next b1
end if
goto main
