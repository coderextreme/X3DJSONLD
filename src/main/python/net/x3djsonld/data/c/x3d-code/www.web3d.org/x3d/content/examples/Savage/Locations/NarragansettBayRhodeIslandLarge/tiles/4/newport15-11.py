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
    GeoLOD(center=(41.86339110810791,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-22.x3d'],child2Url=['../../tiles/5/newport30-23.x3d'],child3Url=['../../tiles/5/newport31-22.x3d'],child4Url=['../../tiles/5/newport31-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[38,30,24,22,21,15,11,9,8,5,6,9,10,18,18,16,16,15,14,11,12,12,31,26,25,26,24,17,11,9,9,9,4,7,12,11,15,11,14,10,12,12,11,12,31,26,30,31,28,20,12,10,9,11,3,5,8,10,10,10,10,13,13,11,10,10,25,27,31,36,31,20,13,11,11,11,9,4,9,8,9,8,10,15,12,15,14,14,22,30,32,36,29,19,15,13,13,14,11,5,3,13,15,12,13,16,11,12,18,18,27,35,34,37,27,21,17,15,15,14,12,11,6,9,15,16,11,12,10,12,19,20,37,36,40,35,26,20,17,16,16,14,16,14,11,9,6,8,16,9,7,11,9,12,42,38,43,34,26,18,16,20,14,13,10,13,11,11,12,7,16,18,8,8,7,7,33,40,38,38,26,17,20,17,14,14,16,17,14,11,14,18,13,6,10,13,10,9,31,33,26,24,23,23,24,24,20,17,20,20,18,15,12,14,14,14,11,8,10,11,32,23,22,24,25,26,28,26,26,23,24,29,29,20,11,11,8,8,9,8,10,12,25,21,23,27,26,27,29,36,34,26,26,34,30,22,21,16,13,13,15,9,8,10,23,25,26,27,30,29,29,35,38,33,31,35,29,29,26,18,14,15,11,11,11,9,23,23,28,30,34,32,33,33,37,36,35,40,34,38,33,25,18,17,12,11,10,10,25,22,31,33,37,37,39,36,39,41,39,38,37,39,42,25,22,21,20,21,11,11,24,21,30,37,42,39,41,44,49,51,49,42,40,39,38,32,30,29,30,24,24,22,24,23,31,38,43,41,41,51,50,53,56,52,50,41,38,40,40,46,44,32,25,23,27,26,32,38,42,41,45,51,51,64,67,62,57,51,42,45,51,58,62,51,34,29,28,31,32,38,40,42,49,51,54,68,72,66,62,53,51,60,58,53,52,51,36,36,29,35,37,40,42,44,48,52,54,64,65,58,54,53,49,59,50,46,39,37,32,32,37,38,41,44,44,47,51,53,54,63,61,57,50,51,47,48,45,39,38,36,32,32,37,38,42,45,45,48,51,53,54,63,61,57,50,51,47,47,44,39,36,36,32,32],
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
