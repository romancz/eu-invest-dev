<?php
/**
 * @file
 * This template is used to print a single field in a view.
 */
 ?>
<?php foreach ($row->field_field_visual_1 as $item): ?>
 <div> <?php print render($item['rendered']); ?> </div>
<?php endforeach; ?>
