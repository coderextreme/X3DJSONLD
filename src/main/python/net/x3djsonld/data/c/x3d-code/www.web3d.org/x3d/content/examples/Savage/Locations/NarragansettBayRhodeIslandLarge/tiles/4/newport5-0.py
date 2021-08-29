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
    GeoLOD(center=(41.37958958474797,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport10-0.x3d'],child2Url=['../../tiles/5/newport10-1.x3d'],child3Url=['../../tiles/5/newport11-0.x3d'],child4Url=['../../tiles/5/newport11-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[26,31,32,28,25,21,27,28,28,24,23,21,25,27,27,28,29,30,37,40,43,41,28,15,17,23,24,23,24,25,22,19,18,18,17,19,21,18,20,27,33,36,40,40,12,16,13,21,27,17,16,14,27,20,24,23,18,19,16,14,13,19,24,32,39,43,13,13,12,12,11,9,9,9,13,18,21,21,18,23,16,16,16,18,22,25,31,33,10,9,9,7,7,8,11,11,15,15,12,13,13,13,12,13,13,20,29,33,38,37,13,12,10,7,9,9,8,8,12,11,12,13,13,14,13,11,11,15,31,40,41,43,12,12,12,11,10,9,10,12,14,13,15,16,14,21,30,27,18,18,24,30,33,34,12,12,11,9,11,12,10,13,15,15,19,18,13,15,33,40,32,34,39,37,36,37,13,16,11,10,10,17,11,11,12,13,21,16,15,15,16,20,18,26,35,43,53,50,10,9,10,10,9,13,11,12,15,13,16,16,16,17,16,18,26,34,47,52,54,58,11,12,13,12,12,14,13,16,16,13,14,14,15,16,34,25,25,37,40,51,60,63,16,22,13,16,15,11,9,15,16,15,12,11,15,28,38,39,33,38,40,52,50,51,15,23,16,13,11,15,7,10,14,11,13,7,10,30,47,51,44,40,48,49,50,50,9,14,17,22,18,6,4,4,11,17,12,11,14,22,39,45,53,52,52,51,46,45,8,13,18,24,21,19,13,10,10,19,18,23,15,15,23,41,49,57,59,51,51,50,8,12,16,17,19,17,15,11,14,14,14,16,14,12,16,31,46,52,55,58,54,53,23,20,12,12,11,16,14,10,15,14,14,15,24,17,17,20,31,44,48,48,46,46,41,35,18,12,11,18,14,12,13,15,17,16,19,17,19,19,26,31,38,44,49,48,31,26,18,13,14,14,14,11,19,36,46,28,14,19,32,27,22,22,33,43,45,43,15,13,17,17,14,13,13,10,21,37,31,16,11,15,26,22,17,17,22,30,41,43,4,6,9,15,29,23,14,10,14,17,14,10,10,15,18,16,11,13,12,17,29,31,4,6,9,16,29,25,14,9,14,16,14,8,10,15,19,16,11,12,12,16,28,30],
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
