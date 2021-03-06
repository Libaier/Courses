###事务

数据库事务(Database Transaction) ，是指作为单个逻辑工作单元执行的一系列操作，要么完全地执行，要么完全地不执行。

事务的概念来自于两个独立的需求：并发数据库访问，系统错误恢复。

一个事务是可以被看作一个单元的一系列SQL语句的集合。

####事务的ACID特性

* A, atomacity 原子性 
* C, consistency 一致性
* I, isolation 隔离性
* D, durability 持久性

####事务的隔离级别

不进行并发控制可能产生的异常

* 脏读(Dirty Read)
* 非重复读(Nonrepeatable Read)
* 幻像读(Phantom Reads)
* 丢失修改(Lost Update)

####SQL规范中的四个事务隔离级别

* 未提交读(Read Uncommitted)
* 已提交读(Read Committed)
* 可重复读(Repeatable Read)
* 串行读(Serializable)

####事务隔离的实现——锁

* 共享锁(S锁)
* 更新锁(U锁)
* 独占锁(X锁，也叫排他锁)


###索引

####索引的定义

索引是定义在存储表(Table)基础之上，有助于无需检查所有记录而快速定
位所需记录的一种辅助存储结构，由一系列存储在磁盘上的索引项(index
entries)组成，每一索引项又由两部分构成:

	* 索引字段：由Table中某些列(通常是一列)中的值串接而成。索引中通
	常存储了索引字段的每一个值(也有不是这样的)。索引字段类似于词典中的词
	
	* 行指针：指向Table中包含索引字段值的记录在磁盘上的存储位置。行
	指针类似于词条在书籍、词典中出现的页码


索引技术应用使检索效率大幅度提高，但同时其也增加了存储空间、使维护负担加重(不仅要维护主文件，而且要维护索引文件)

####SQL语言中的索引创建与维护

* 当定义Table后，如果定义了主键，则系统将自动创建主索引，利用主索引
对Table进行快速定位、检索与更新操作;
* 索引可以由用户创建，也可以由用户撤消。
* 当索引被创建后，无论是主索引，还是用户创建的索引，DBMS都将自动维
护所有的索引，使其与Table保持一致，即：当一条记录被插入到Table中
后，所有索引也自动的被更新
* 当Table被删除后(drop table), 定义在该Table上的所有索引将自动被撤消


###参考资料

[数据库系统（下）](http://www.icourse163.org/course/hit-1001578001#/info)
