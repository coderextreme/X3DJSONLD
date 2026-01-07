package net.coderextreme;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.StringWriter;
import java.io.Writer;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class CommentNormalizingHandler {

    public static void main(String[] args) throws IOException {
        // Read the entire input into a String (preserves all formatting, newlines, quotes)
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder inputBuilder = new StringBuilder();
        char[] buffer = new char[8192];
        int bytesRead;
        while ((bytesRead = reader.read(buffer)) != -1) {
            inputBuilder.append(buffer, 0, bytesRead);
        }
        String input = inputBuilder.toString();

        StringWriter writer = new StringWriter();

        // Process the string, finding comments and preserving everything else
        processXmlWithComments(input, writer);

        // Output result
        System.out.print(writer.toString());
    }

    private static void processXmlWithComments(String input, Writer writer) throws IOException {
        int length = input.length();
        int currentIndex = 0;

        while (currentIndex < length) {
            // Find the start of the next comment
            int startComment = input.indexOf("<!--", currentIndex);

            if (startComment == -1) {
                // No more comments. Write the rest of the file exactly as is.
                writer.write(input.substring(currentIndex));
                break;
            }

            // Write everything BEFORE the comment exactly as is
            // (preserves whitespace, attributes, DTDs, self-closing tags, quotes)
            writer.write(input.substring(currentIndex, startComment));

            // Find the end of the comment
            int endComment = input.indexOf("-->", startComment);
            if (endComment == -1) {
                // Malformed XML: Comment opened but never closed.
                // Write the rest as is to be safe.
                writer.write(input.substring(startComment));
                break;
            }

            // Extract the raw comment text (excluding <!-- and -->)
            String rawComment = input.substring(startComment + 4, endComment);

            // Apply your specific Normalization Logic
            writeNormalizedComment(writer, rawComment);

            // Move past this comment
            currentIndex = endComment + 3;
        }
    }

    private static void writeNormalizedComment(Writer writer, String commentText) throws IOException {
        // 1. Normalize logic: Replace newlines inside <Tags> with spaces
        String normalizedTags = normalizeTagNewlines(commentText);

        // 2. Split logic: Split by remaining newlines
        // use limit -1 to capture trailing empty lines if they exist
        String[] lines = normalizedTags.split("\\n", -1);

        // 3. Write logic
        // We need to know indentation of the line we are on?
        // Actually, with this approach, we just output the formatted comment blocks.
        // NOTE: The previous "between text" whitespace was written in the substring before startComment.

        boolean first = true;
        for (String line : lines) {
            String trimmed = line.trim();

            if (!trimmed.isEmpty()) {
                if (!first) {
                    writer.write("\n");
                }
                writer.write("<!-- ");
                writer.write(trimmed);
                writer.write(" -->");
                first = false;
            }
        }

        // If the original comment was entirely empty or just whitespace (e.g. <!--  -->),
        // loop above writes nothing, effectively deleting it.
    }

    /**
     * Finds substrings starting with < and ending with >,
     * and replaces newlines within those substrings with spaces.
     */
    private static String normalizeTagNewlines(String text) {
        Pattern tagPattern = Pattern.compile("<[^>]+>");
        Matcher matcher = tagPattern.matcher(text);
        StringBuffer sb = new StringBuffer();

        while (matcher.find()) {
            String tagContent = matcher.group();
            // Replace newlines (and surrounding whitespace) with a single space inside the tag
            String normalized = tagContent.replaceAll("\\s*\\n\\s*", " ");
            matcher.appendReplacement(sb, Matcher.quoteReplacement(normalized));
        }
        matcher.appendTail(sb);

        return sb.toString();
    }
}
