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
    GeoLOD(center=(41.52473004175595,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-26.x3d'],child2Url=['../../tiles/5/newport16-27.x3d'],child3Url=['../../tiles/5/newport17-26.x3d'],child4Url=['../../tiles/5/newport17-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,6,4,9,15,9,4,4,0,0,0,0,0,0,0,0,0,0,0,4,6,7,10,10,13,14,15,9,7,7,0,0,0,0,0,0,0,0,0,0,0,4,9,12,11,12,16,18,12,10,10,9,0,0,0,0,0,0,0,0,0,0,0,5,10,13,16,15,19,18,13,13,11,10,0,0,0,0,0,0,0,0,0,3,7,7,10,16,17,16,21,17,17,16,14,13,0,0,0,0,0,0,0,0,7,7,11,12,12,16,16,17,18,21,21,16,13,13,0,0,0,0,0,0,0,0,9,12,16,14,15,17,16,17,19,22,23,17,16,17,0,0,0,0,0,0,0,0,4,11,17,15,17,19,19,20,26,25,22,18,17,19,0,0,0,0,0,0,0,0,0,7,12,16,22,22,22,23,27,25,20,18,18,19,0,0,0,0,0,0,0,0,0,4,10,18,28,27,25,24,23,21,19,19,18,18,0,0,0,0,0,0,0,0,0,0,5,19,28,30,24,24,22,20,20,20,18,18,0,0,0,0,0,0,0,0,0,0,3,17,30,30,25,23,21,24,26,21,18,18,0,0,0,0,0,0,0,0,0,1,1,17,30,31,26,23,23,28,33,26,22,21,0,0,0,0,0,0,0,0,1,1,3,21,26,32,28,25,24,32,39,30,25,25,0,0,0,0,0,0,0,0,0,1,6,21,25,31,32,26,24,27,34,29,27,26,0,0,0,0,0,0,0,0,1,3,6,14,25,35,36,29,26,29,32,28,25,24,0,0,0,0,0,0,0,7,13,15,11,15,24,36,38,34,28,31,28,24,23,24,0,0,0,0,0,0,0,14,24,25,19,19,28,30,29,31,32,29,23,20,19,19,0,0,0,0,0,0,0,11,26,28,23,20,22,22,21,28,32,28,25,18,13,13,0,0,0,0,0,0,0,5,24,34,25,22,21,19,19,23,30,27,21,14,14,14,0,0,0,0,0,0,0,0,26,30,26,25,24,23,18,17,21,18,16,14,14,14,0,0,0,0,0,0,0,0,26,30,26,26,24,23,18,17,20,17,15,14,14,14],
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
