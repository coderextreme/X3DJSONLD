###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=2,name='VolumeRendering'),
    component(level=2,name='Texturing3D'),
    meta(content='SegmentedVentricles.x3d',name='title'),
    meta(content='Volume rendering of a segmented brain dataset, rendered with opacity map and tone map render styles',name='description'),
    meta(content='29 February 2011',name='created'),
    meta(content='29 March 2020',name='modified'),
    meta(content='Andrew Wood, Nicholas Polys: Virginia Tech',name='creator'),
    meta(content='SegmentedVentricles.x3d',name='reference'),
    meta(content='README.txt',name='reference'),
    meta(content='Get prerequisite dataset, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/mri_ventricles.nrrd',name='reference'),
    meta(content='All datasets, http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/datasets.zip',name='reference'),
    meta(content='All datasets, https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/datasets.zip',name='reference'),
    meta(content='Run the download target in the Ant build.xml file to install reference nrrd files locally.',name='reference'),
    meta(content='build.xml',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/VolumeRendering/SegmentedVentricles.x3d',name='identifier'),
    meta(content='Volume Data obtained from http://www.volvis.org',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Nrrd conversion utility located at http://teem.sourceforge.net/unrrdu',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SegmentedVentricles.x3d'),
    Group(
      children=[
      Viewpoint(DEF='VP',description='Segmented Ventricles',position=(0,0,0.21)),
      Background(DEF='BG'),
      PointLight(intensity=0.4,location=(1,0,1)),
      Transform(scale=(0.0651042,0.0651042,0.0651042),
        children=[
        SegmentedVolumeData(dimensions=(2.304,2.304,1.116),
          segmentIdentifiers=ImageTexture3D(url=["datasets/nrrd/mri_ventricles_segment.nrrd","http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/mri_ventricles_segment.nrrd","https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/.nrrd"]),
          voxels=ImageTexture3D(url=["datasets/nrrd/mri_ventricles.nrrd","http://snoid.sv.vt.edu/medical/X3DVolumes/examples/datasets/nrrd/mri_ventricles.nrrd","https://savage.nps.edu/Savage/VolumeRendering/datasets/nrrd/mri_ventricles.nrrd"]),
          renderStyle=[
          OpacityMapVolumeStyle(),
          ToneMappedVolumeStyle(),])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SegmentedVentricles.py")
