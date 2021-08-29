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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.486513657765066,-71.41872188014497,0.0),range=4300.153,child1Url=['../../tiles/4/newport2-0.x3d'],child2Url=['../../tiles/4/newport2-1.x3d'],child3Url=['../../tiles/4/newport3-0.x3d'],child4Url=['../../tiles/4/newport3-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[37,32,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,37,31,15,2,0,0,0,0,0,4,10,0,0,0,0,0,0,0,0,0,0,0,0,0,35,27,13,0,0,0,0,0,1,8,14,10,0,0,0,0,0,0,0,0,0,0,0,0,32,22,7,0,0,0,0,0,0,7,15,16,0,0,0,0,0,0,0,0,0,0,0,0,25,14,4,0,0,0,0,0,0,7,14,16,0,0,0,0,0,0,0,0,0,0,0,0,17,9,3,0,0,0,0,0,0,5,8,15,0,0,0,0,0,0,0,0,0,0,0,0,16,7,1,0,0,0,0,0,0,0,4,11,0,0,0,0,0,0,0,0,0,0,0,0,16,8,3,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,18,9,5,5,2,4,6,5,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,10,7,7,6,8,14,13,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,12,9,6,7,13,17,17,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,12,8,8,8,12,17,20,14,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,14,6,7,11,17,21,20,18,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,24,18,11,10,17,24,28,27,21,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,20,19,18,22,29,34,32,23,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,26,27,25,24,29,34,33,24,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,29,29,27,27,28,31,31,20,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,36,33,31,28,26,28,25,17,6,0,0,0,0,0,0,0,0,0,0,0,1,0,0,37,38,36,33,30,31,28,23,16,2,0,0,0,0,1,1,0,0,0,0,0,0,4,1,40,38,36,34,33,32,33,29,15,9,1,0,0,0,0,0,0,0,0,0,0,0,10,11,40,38,36,34,33,32,32,30,16,10,1,0,0,0,0,0,0,0,0,0,0,0,11,12],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
