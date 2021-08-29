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
    GeoLOD(center=(41.551080519985156,-71.41872188014497,0.0),range=4300.153,child1Url=['../../tiles/4/newport6-0.x3d'],child2Url=['../../tiles/4/newport6-1.x3d'],child3Url=['../../tiles/4/newport7-0.x3d'],child4Url=['../../tiles/4/newport7-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[31,38,39,46,43,48,44,41,30,19,8,3,0,0,0,0,0,0,0,0,0,0,0,0,27,33,42,42,42,35,34,27,23,12,3,1,0,0,0,0,0,0,0,0,0,0,0,0,28,30,39,40,37,27,23,18,13,5,1,2,0,0,0,0,0,0,0,0,0,0,0,0,16,23,33,37,36,26,15,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,21,23,26,24,9,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,14,18,13,10,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,12,11,7,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,2,6,6,9,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,2,0,1,2,0,0,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,3,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,9,6,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,8,6,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,9,11,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
