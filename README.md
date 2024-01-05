Learn UE Game Programming


这门课程项目最终涉及的内容：
- 第三人称角色控制
- Action System(作者自己写的轻量化的Gameplay Ability System)
- AttributeComponent(Health, Rage etc.)
- 保存系统
- 事件驱动的UI和游戏内容反应
- 基于GameplayTags制作的BUFF和动作
- 多人游戏支持
- GameMode逻辑
    - EQS与机器人的绑定/可拾取增益的生成
    - 机器人生成(机器人需要点数生成， gamemode根据时间获取点数)
    - 存有机器人信息的DataTable
    - 存有机器人配置的DataAssets
- 资源管理：异步加载资源和数据
- AI
    - 拥有行为树的小兵(漫游，观察，追逐，攻击，逃跑/治疗)
    - C++自定义行为树节点
    - EQS生成的AI选择的攻击和躲藏位置
- 可拾取物治疗，获得金币(UMG)
- 主持/加入游戏的主菜单 (UMG)
- 玩家/敌人信息的UI
- C++ 本地化文本示例


[Stanford CS193u:Video Game Development in C++ and Unreal Engine](https://web.archive.org/web/20210514120659/https://www.tomlooman.com/stanford-cs193u/)

## 第一讲 Intro & Course Logistics

这门课一共持续10周，每周3节1h的lecture+一份作业和助教的评讲。

这门课程主要关注UE4的C++部分，主要的内容包括Gameplay的框架，AI，网络，物理/碰撞，蓝图和UI部分

课程每周会有一份作业，9-10周是最终作业周，最终作业的游戏项目必须有这些内容：

- 第三人称操作的角色
- projectile（弹道武器）的攻击
- 与世界中其他物体的“交互”，例如可以按键打开的门，拾取的物体等
- 可以被拾取的更改角色属性的道具
- 敌人与敌人AI，需要有一些特殊的行动，例如捡起地上的回血道具或者寻找掩体
- 多人游戏支持
- 胜利条件和游戏结束的状态
- 玩家信息和游戏状态的UI
- 打包成EXE文件
- 要求在老师的机器上能跑到60FPS

[虚幻引擎文档：代码规范](https://docs.unrealengine.com/4.26/zh-CN/ProductionPipelines/DevelopmentSetup/CodingStandard/)

[Wiki Page](https://unrealcommunity.wiki/)
[Learning Resource Collection](https://www.tomlooman.com/unreal-engine-resources/)

## 第二讲 Project Start & Version Control

[Project Style Guide](https://github.com/Allar/ue5-style-guide)

[虚幻文件命名规范](https://github.com/Allar/ue5-style-guide)

[虚幻C++部分的Gameplay框架介绍](https://www.tomlooman.com/unreal-engine-gameplay-framework/)

[B站详细介绍GamPlay框架](https://www.bilibili.com/video/BV1ED4y1D7Sf/?vd_source=dcd354bbbdc6f4d8970e2af0e5dc6a7e)

[Unreal's Property System](https://www.unrealengine.com/en-US/blog/unreal-property-system-reflection)

[Input Binding](https://docs.unrealengine.com/en-US/InteractiveExperiences/Input/index.html)



### 虚幻引擎属性系统(反射)

这里代码中出现的UPROPERTY宏与UENUM()、UCLASS()、USTRUCT()、UFUNCTION()是UE4在C++中实现反射机制的方法，这篇文章对UE4的反射进行了简单的介绍：[Unreal Property System(Reflection)](https://www.unrealengine.com/zh-CN/blog/unreal-property-system-reflection)

UE4中实现的反射机制使得UE4能够在C++的基础上添加了这些功能：

- 让编辑器和蓝图访问C++中的内容
- 网络行为（多人游戏）
- 内存管理

关于UFUNCTION和UPROPERTY声明时使用的关键字和对应的效果,可以在文档中查到:
[属性说明符](https://docs.unrealengine.com/4.26/zh-CN/ProgrammingAndScripting/GameplayArchitecture/Properties/Specifiers/)
[函数说明符](https://docs.unrealengine.com/4.26/zh-CN/ProgrammingAndScripting/GameplayArchitecture/Functions/Specifiers/)



### Unreal Build Tool & Unreal Header Tool

虚幻引擎的编译工具，用于：

- 生成各种generated.h文件以将C++的代码暴露给蓝图。
- 通过在.Build.cs文件中的定义加载编译时所需要用到的相应模块或插件。
- 配置编译时的选项。

[理解UnrealBuildTool](https://zhuanlan.zhihu.com/p/57186557)


### Unreal项目的文件结构

- ./Config 包括各种.ini的配置文件 (游戏配置，编辑器配置，引擎配置，用户配置等)
- ./Content 存储二进制的.uasset资源文件
- ./Source 存储C++代码./Plugins 存储为项目编写的以插件形式加载的模块化内容（临时文件）
- ./Saved 存储运行时数据，例如生成的配置文件，截图，游戏存档，调试记录（临时文件）
- ./Intermediate 每次Build之后生成的项目文件（临时文件）
- ./DerivedDataCache 生成的shader/材质/模型信息
- ./Binaries Build的输出文件夹


## 第三讲 Collision & Physics


[Collision Filtering](https://www.unrealengine.com/en-US/blog/collision-filtering)


子弹会受重力影响下坠，排查下哪里设置不对


## 第四讲 接口和碰撞查询

## 第五讲 蓝图

## 第六讲 调试+作业

[Log, Printing Messages To Yourself During Runtime](https://nerivec.github.io/old-ue4-wiki/pages/logs-printing-messages-to-yourself-during-runtime.html)

[Assert](https://docs.unrealengine.com/en-US/Programming/Assertions/index.html)



## 第七讲 UMG血条

[String Handling(FString, FName, FText)](https://docs.unrealengine.com/5.3/en-US/string-handling-in-unreal-engine/)


委托

## 第八讲 材质



## 第九讲 音频、动画、UI



