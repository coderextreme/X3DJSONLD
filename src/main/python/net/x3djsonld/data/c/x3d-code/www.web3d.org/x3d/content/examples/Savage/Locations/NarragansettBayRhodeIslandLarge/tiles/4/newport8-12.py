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
    GeoLOD(center=(41.52473004175595,-71.24158699571478,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-24.x3d'],child2Url=['../../tiles/5/newport16-25.x3d'],child3Url=['../../tiles/5/newport17-24.x3d'],child4Url=['../../tiles/5/newport17-25.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-12.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,3,7,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,0,10,0,0,0,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,12,14,8,18,12,7,10,17,15,16,0,0,0,0,0,0,0,0,0,0,0,0,21,31,27,12,11,13,21,26,21,26,25,0,0,0,0,0,0,0,0,0,0,0,26,38,35,31,14,14,21,25,29,30,28,10,0,0,0,0,0,0,0,0,0,0,31,44,49,36,24,15,19,24,28,33,24,9,0,0,0,0,0,0,0,0,0,0,38,46,55,47,34,22,22,26,28,22,10,2,0,0,0,0,0,0,0,0,0,0,41,47,54,52,45,35,34,29,23,13,5,8,7,0,0,0,0,0,0,0,0,0,42,48,53,54,52,47,41,36,25,12,10,20,16,7,0,0,0,0,0,0,0,0,43,50,55,58,59,53,50,38,28,15,17,30,20,13,1,0,0,0,0,0,0,0,46,55,63,63,63,61,55,45,30,16,22,30,24,19,13,0,0,0,0,0,0,0,51,58,61,63,61,61,57,46,34,20,20,21,24,22,21,12,0,0,0,0,0,0,55,61,62,57,63,64,55,45,34,23,19,21,22,20,23,24,0,0,0,0,0,0,55,64,64,63,59,54,50,42,36,26,21,23,19,13,16,27,17,0,0,0,0,0,56,65,67,65,60,52,46,41,37,28,22,19,13,13,14,20,24,0,0,0,0,0,54,66,79,77,59,54,45,43,39,32,26,19,13,12,16,16,18,6,0,0,0,0,55,57,69,64,62,59,51,47,41,36,32,22,15,11,16,12,6,0,0,0,0,0,60,61,68,62,60,59,71,52,47,42,35,27,21,11,6,1,0,0,0,0,0,0,71,70,63,63,64,62,60,58,53,44,36,29,20,12,0,0,0,0,0,0,0,0,80,74,66,65,61,66,64,63,54,44,34,25,19,7,0,0,0,0,0,0,0,0,82,74,67,65,62,66,65,63,53,43,34,25,20,8,0,0,0,0,0,0,0,0],
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
