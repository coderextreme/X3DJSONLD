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
    GeoLOD(center=(41.49458451554258,-71.37836759125742,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-6.x3d'],child2Url=['../../tiles/5/newport6-7.x3d'],child3Url=['../../tiles/5/newport7-6.x3d'],child4Url=['../../tiles/5/newport7-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[6,0,0,0,0,0,0,0,0,0,0,7,13,18,21,25,26,26,25,24,25,25,24,24,3,0,0,0,0,0,0,0,0,0,1,9,14,19,23,26,28,27,27,27,26,25,23,22,1,0,0,0,0,0,0,0,0,0,6,11,14,18,23,26,28,28,28,27,27,26,24,24,2,0,0,0,0,0,0,0,0,1,9,12,15,18,22,25,27,28,30,28,28,27,27,26,1,0,0,0,0,0,0,0,0,5,11,14,16,18,21,23,26,28,31,31,29,27,27,26,0,0,0,0,0,0,0,0,1,4,9,13,16,17,20,22,26,28,29,30,27,25,24,24,0,0,0,0,0,0,0,0,0,1,6,11,14,16,19,21,25,28,29,29,26,24,23,22,0,0,0,0,0,0,0,0,0,2,6,9,12,14,17,20,24,27,28,27,26,24,22,21,0,0,0,0,0,0,0,0,0,2,5,7,10,13,15,18,22,24,25,25,24,23,21,21,0,0,0,0,0,0,0,0,0,1,2,5,8,11,14,16,19,21,22,23,23,21,20,19,0,0,0,0,0,0,0,0,0,1,2,3,5,9,11,13,15,18,21,22,22,20,19,19,0,0,0,0,0,1,1,3,3,3,4,4,5,7,9,10,11,14,17,20,19,19,19,18,0,0,0,0,0,2,4,5,5,6,6,5,5,5,7,8,9,12,15,18,19,18,18,17,0,0,0,0,2,5,8,8,9,9,9,8,8,8,7,9,9,12,14,16,17,16,15,15,0,0,0,1,6,8,10,10,12,12,13,12,11,10,9,10,10,12,14,14,14,14,12,12,0,0,0,5,8,10,11,12,15,17,17,16,14,13,12,11,13,14,14,14,13,13,11,11,0,0,0,0,8,12,15,17,19,20,20,19,18,16,15,14,15,14,14,14,14,13,11,11,0,0,0,0,8,12,16,20,22,22,21,20,20,18,17,16,15,15,14,14,16,16,15,14,0,0,0,0,3,11,15,20,23,22,22,21,21,20,20,18,17,17,16,16,17,17,16,16,0,0,0,0,2,9,16,21,24,24,23,23,22,21,20,19,19,19,17,18,18,18,17,17,0,0,0,0,2,8,15,19,23,23,24,23,23,22,20,19,19,20,19,19,19,21,19,19,0,0,0,0,0,8,13,16,18,22,24,24,24,22,22,20,18,18,19,21,21,22,21,21,0,0,0,0,0,1,8,13,17,20,22,22,21,21,20,19,18,18,20,21,22,22,21,20,0,0,0,0,0,0,8,12,17,20,21,23,20,20,20,19,17,17,20,21,22,21,20,20],
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
