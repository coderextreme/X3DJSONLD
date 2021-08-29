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
    GeoLOD(center=(41.62149034642794,-71.19761628762797,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-26.x3d'],child2Url=['../../tiles/5/newport20-27.x3d'],child3Url=['../../tiles/5/newport21-26.x3d'],child4Url=['../../tiles/5/newport21-27.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-13.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,1,1,1,1,1,1,15,20,14,10,15,28,31,35,31,42,0,0,0,0,0,1,3,1,1,1,1,1,16,21,13,10,18,37,36,34,32,34,0,0,0,0,0,0,4,2,1,1,1,1,18,19,13,10,23,47,35,34,33,34,0,0,0,0,0,0,2,2,2,1,1,1,15,22,16,10,33,41,36,34,34,34,0,0,0,0,0,0,0,1,1,1,1,5,15,22,13,12,27,39,35,34,34,34,0,0,0,0,0,0,0,0,1,0,2,3,8,12,9,18,44,42,37,35,36,36,0,0,0,0,0,0,0,0,0,3,9,12,5,8,7,17,41,48,41,44,48,46,0,0,0,0,0,0,0,0,3,7,16,9,7,7,7,15,42,44,49,44,46,42,0,0,0,0,0,0,0,3,6,9,9,1,4,10,7,9,45,44,48,44,50,46,0,0,0,0,0,0,7,12,14,8,0,0,0,11,7,12,32,41,41,42,46,43,0,0,0,0,0,1,12,18,16,1,0,0,1,12,8,18,40,47,49,45,43,40,0,0,0,0,0,9,20,18,8,0,0,0,0,16,12,31,38,49,52,48,41,42,0,0,0,0,0,13,21,13,1,0,0,0,4,8,34,45,55,59,56,56,49,45,0,0,0,0,0,14,13,2,0,0,0,4,1,13,19,31,54,62,61,53,47,47,0,0,0,0,0,11,5,0,0,0,2,13,30,31,25,35,42,58,65,59,52,47,0,0,0,0,0,2,0,2,1,17,25,41,40,41,48,47,50,51,55,59,53,49,0,0,0,0,0,3,11,17,13,9,13,38,52,55,46,56,61,59,54,47,47,47,1,0,0,0,0,11,19,25,36,15,13,22,28,41,46,54,58,57,55,48,44,45,1,1,0,0,3,14,25,41,36,21,24,36,25,29,34,57,57,52,48,43,44,44,1,4,0,0,0,10,27,48,34,28,28,32,33,27,36,62,55,43,40,40,41,42,1,1,1,1,1,7,28,41,39,33,30,32,30,32,42,41,42,40,40,41,45,47,1,2,1,1,1,6,28,41,40,33,31,32,30,32,43,41,41,40,40,41,46,47],
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
