[Service]
Type=oneshot
ExecStart=/bin/systemd-tmpfiles --clean
IOSchedulingClass=idle
                                                                                                                                                                                                                                                                                                                                                                                                                                          �    .   m    ..  �   �	tmp.mount                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       #  This file is part of systemd.
#
#  systemd is free software; you can redistribute it and/or modify it
#  under the terms of the GNU Lesser General Public License as published by
#  the Free Software Foundation; either version 2.1 of the License, or
#  (at your option) any later version.

[Unit]
Description=Unmount All Filesystems
Documentation=man:systemd.special(7)
DefaultDependencies=no
RefuseManualStart=yes
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               #  This file is part of systemd.
#
#  systemd is free software; you can redistribute it and/or modify it
#  under the terms of the GNU Lesser General Public License as published by
#  the Free Software Foundation; either version 2.1 of the License, or
#  (at your option) any later version.

[Unit]
Description=Create list of required static device nodes for the current kernel
DefaultDependencies=no
Before=sysinit.target systemd-tmpfiles-setup-dev.service
ConditionCapability=CAP_SYS_MODULE
ConditionPathExists=/lib/modules/%v/modules.devname

[Service]
Type=oneshot
RemainAfterExit=yes
ExecStart=/bin/kmod static-nodes --format=tmpfiles --output=/run/tmpfiles.d/kmod.conf
                                                                                                                                                                                                                                                                                                                                                             #  This file is part of systemd.
#
#  systemd is free software; you can redistribute it and/or modify it
#  under the terms of the GNU Lesser General Public License as published by
#  the Free Software Foundation; either version 2.1 of the License, or
#  (at your option) any later version.

[Unit]
Description=Paths
Documentation=man:systemd.special(7)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              #############################################################################
# Copyright (C) 2016 Continental Automotive Systems, Inc.
#
# Alle Rechte vorbehalten. All Rights Reserved.
# The reproduction, transmission or use of this document or its contents is
# not permitted without express written authority.
# Offenders will be liable for damages. All rights, including rights created
# by patent grant or registration of a utility model or design, are reserved.
#
# The copyright applies to all files within this package without copyright
# declaration
#############################################################################

[Unit]
Description=iptables firewall service

[Service]
Type=oneshot
RemainAfterExit=yes
ExecStart=/usr/sbin/iptables-restore /var/cache/firewall/iptables.rules
ExecReload=/usr/sbin/iptables-restore /var/cache/firewall/iptables.rules
ExecStop=/usr/sbin/iptables-flush

[Install]
WantedBy=oip-cpi-mandatory.target
                                                                         �    .   m    ..  �   �systemd-tmpfiles-clean.timer                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    #########################################################################################################
# connsvc-wifi-atp-server_2.service
#
# Project:      IIP
#
# Domain:       CoC CD/CONNSVC
#
# SW-Package:   WiFi
#
# Copyright:
# Copyright (C) 2017 Continental Automotive GmbH
# Alle Rechte vorbehalten. All Rights Reserved.
# The reproduction, transmission or use of this document or its contents is
# not permitted without express written authority.
# Offenders will be liable for damages. All rights, including rights created
# by patent grant or registration of a utility model or design, are reserved.
#
#########################################################################################################

[Unit]
Description=WiFi ATP Test Server #2
Requires=dbus.service
After=dbus.service
After=focussed.target
After=recovery@%p:6.service
OnFailure=recovery@%p:6.service

[Service]
Type=simple
#BusName=com.contiautomotive.WiFiServiceClient
ExecStar