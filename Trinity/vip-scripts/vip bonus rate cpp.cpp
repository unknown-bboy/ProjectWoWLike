From f49647e702d26a40c5c881f421c1d0af5b398185 Mon Sep 17 00:00:00 2001
Date: Sat, 11 Aug 2012 15:19:10 +0300
Subject: [PATCH] Add Vip Patch
<Up Date by Lasoto>
 sql/tools/vip.sql                                  |    8 ++++++++
 src/server/game/Entities/Player/Player.cpp         |    8 ++++++--
 src/server/game/Server/WorldSocket.cpp             |   14 ++++++++++++--
 12 files changed, 58 insertions(+), 12 deletions(-)
 create mode 100644 sql/tools/vip.sql
diff --git a/sql/tools/vip.sql b/sql/tools/vip.sql
new file mode 100644
index 0000000..df317ed
--- /dev/null
+++ b/sql/tools/vip.sql
@@ -0,0 +1,8 @@
+CREATE TABLE IF NOT EXISTS `account_premium` (
+  `id` int(11) NOT NULL default '0' COMMENT 'Account id',
+  `setdate` bigint(40) NOT NULL default '0',
+  `unsetdate` bigint(40) NOT NULL default '0',
+  `premium_type` tinyint(4) unsigned NOT NULL default '1',
+  `active` tinyint(4) NOT NULL default '1',
+  PRIMARY KEY  (`id`,`setdate`)
+) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC COMMENT='Premium Accounts';
\ No newline at end of file