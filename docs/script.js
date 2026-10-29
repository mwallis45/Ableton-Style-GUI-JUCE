const toggleBtn = document.getElementById('theme-toggle');
const currentTheme = localStorage.getItem('theme');

// 1. On page load, check for saved user preference
if (currentTheme === 'dark') {
    document.documentElement.setAttribute('data-theme', 'dark');
    toggleBtn.textContent = 'Light Mode';
}

// 2. Listen for button clicks to toggle theme
toggleBtn.addEventListener('click', () => {
    const isDark = document.documentElement.getAttribute('data-theme') === 'dark';

    if (isDark) {
        // Switch to Light Mode
        document.documentElement.removeAttribute('data-theme');
        localStorage.setItem('theme', 'light');
        toggleBtn.textContent = 'Dark Mode';
    } else {
        // Switch to Dark Mode
        document.documentElement.setAttribute('data-theme', 'dark');
        localStorage.setItem('theme', 'dark');
        toggleBtn.textContent = 'Light Mode';
    }
});