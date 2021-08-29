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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Figure25_05ThreeTorchesSingleLOD.x3d',name='title'),
    meta(content='Figure 25.5, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch25/25fig05.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='24 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Three torches within an LOD node. First you must change viewpoints or fly in to watch levels shift. Ordinarily transitions are hard to discern, these transitions are designed to be noticeable.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_05ThreeTorchesSingleLOD.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='20m no-detail torch - zoom in!',orientation=(1,0,0,-0.1),position=(0,1.5,20)),
    Viewpoint(description='10m low-detail torch',orientation=(1,0,0,-0.1),position=(0,1,10)),
    Viewpoint(description='5m medium-detail torch',orientation=(1,0,0,-0.1),position=(0,0.5,5)),
    Viewpoint(description='2m high-detail torch',orientation=(1,0,0,-0.1),position=(0,0,2)),
    NavigationInfo(speed=2,type=["FLY","EXAMINE","ANY"]),
    #  In practice, transitions occur at ranges where the switch in geometry is not visible 
    LOD(range=[4,8,16],
      children=[
      Inline(url=["Figure25_01TorchHighDetail.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_01TorchHighDetail.x3d","Figure25_01TorchHighDetail.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_01TorchHighDetail.wrl"]),
      Inline(url=["Figure25_02TorchMediumDetail.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_02TorchMediumDetail.x3d","Figure25_02TorchMediumDetail.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_02TorchMediumDetail.wrl"]),
      Inline(url=["Figure25_03TorchLowDetail.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_03TorchLowDetail.x3d","Figure25_03TorchLowDetail.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_03TorchLowDetail.wrl"]),
      WorldInfo(info=["null node"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure25_05ThreeTorchesSingleLOD.py")
