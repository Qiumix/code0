graph TD
    subgraph 核心角色
        A[北原春希]:::core
        B[冬马和纱]:::core
        C[小木曾雪菜]:::core
    end
    subgraph 次要角色
        D[杉浦小春]:::secondary
        E[风冈麻理]:::secondary
        F[水泽依绪]:::secondary
        G[霞泽美咲]:::secondary
    end

    classDef core fill:#FFB6C1,stroke:#FF69B4;
    classDef secondary fill:#ADD8E6,stroke:#00008B;

    A --> B["相互爱慕、复杂羁绊"]
    A --> C["恋人关系、情感冲突"]
    B --> C["情敌、好友关系"]
    A --> D["工作伙伴、微妙情感"]
    A --> E["职场合作、相互理解"]
    A --> F["朋友、校园回忆关联"]
    A --> G["乐队伙伴、友情"]
    D --> A["欣赏、依赖"]
    E --> A["工作中的支持"]
    F --> A["校园时期的情谊"]
    G --> A["音乐梦想的同行者"]