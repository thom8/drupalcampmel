<div
  class="panel <?php echo isset($bean->field_block_class[LANGUAGE_NONE][0]['value']) ? $bean->field_block_class[LANGUAGE_NONE][0]['value'] : '' ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="panel-heading">
    <?php echo $bean->label ?>
  </div>
  <div class="panel-body">
    <?php echo $body ?>
  </div>
  <?php if ($footer): ?>
    <div class="panel-footer">
      <?php echo $footer ?>
    </div>
  <?php endif; ?>
</div>
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
