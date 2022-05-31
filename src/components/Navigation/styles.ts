import styled from 'styled-components'

export const Container = styled.div`
    display: flex;
    flex-direction: row;

    align-items: center;
    justify-content: space-between;

    padding: 20px 40px;

    img {
        width: 160px;
    }

    div.menu {
        display: flex;
        flex-direction: row;

        align-items: center;
        
        gap: 12px;

        a {
            text-decoration: none;

            font-weight: 600;
            color: #29292e;

            &:hover {
                transition: 0.2s;
                color: #b0263d;
            }

            img {
                width: 32px;

                &:hover {
                    opacity: 0.7;
                }
            }
        }
    }
`