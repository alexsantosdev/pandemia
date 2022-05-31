import styled from 'styled-components'

export const Container = styled.div`
    display: flex;
    flex-direction: column;

    div.content {
        display: flex;
        flex-drection: row;

        padding: 4rem 0;

        align-items: center;
        justify-content: center;

        gap: 22px;

        .side {
            display: flex;
            flex-direction: column;

            h2 {
                font-size: 46px;
            }

            span {
                font-size: 22px;
            }

            span + span {
                font-size: 18px;
                color: #6f6f75;

                margin-top: 1rem;
            }

            img {
                width: 32px;
            }
        }

        img {
            width: 600px;
        }
    }
`