<div class="row">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <div class="col-sm-9">
    <?php echo $left ?>
  </div>
  <div class="col-sm-3">
    <?php echo $right ?>
  </div>
</div>
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
