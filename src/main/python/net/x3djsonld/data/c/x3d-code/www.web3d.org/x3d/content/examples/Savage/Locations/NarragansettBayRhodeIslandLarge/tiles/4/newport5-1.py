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
    GeoLOD(center=(41.37958958474797,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport10-2.x3d'],child2Url=['../../tiles/5/newport10-3.x3d'],child3Url=['../../tiles/5/newport11-2.x3d'],child4Url=['../../tiles/5/newport11-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[41,36,33,33,34,35,31,26,17,14,13,7,5,0,0,0,0,0,0,8,6,7,40,44,39,39,41,40,43,36,27,28,20,17,14,5,9,0,0,0,0,8,9,8,43,44,40,52,43,52,46,47,38,36,29,28,22,11,11,2,1,4,2,9,12,12,33,34,46,36,44,49,52,47,45,44,41,36,27,21,22,21,10,10,11,10,11,12,37,37,37,40,37,41,49,50,47,51,45,42,38,33,33,23,22,32,22,20,25,26,43,43,43,41,38,45,51,45,48,51,49,50,45,30,37,39,31,26,30,24,35,37,34,39,49,47,44,50,44,52,54,50,56,43,44,39,38,33,29,30,34,30,35,36,37,40,51,54,50,54,44,43,47,56,58,52,50,35,38,32,28,30,32,31,38,40,50,55,58,49,49,48,45,54,47,58,63,57,46,37,33,30,28,27,35,35,32,32,58,62,67,53,43,50,49,51,57,57,67,55,46,48,35,34,36,24,22,29,27,26,63,72,53,56,46,50,40,45,45,50,60,53,37,38,31,31,27,21,24,22,23,22,51,60,51,51,53,47,46,41,40,46,49,39,31,25,22,21,22,22,18,21,18,20,50,51,49,42,42,44,44,44,31,38,33,35,37,28,25,19,18,19,17,18,21,21,45,43,40,44,44,43,41,37,33,30,30,35,39,31,25,23,17,18,16,13,13,13,50,51,55,55,55,57,50,41,39,32,32,39,40,34,26,27,22,18,18,16,11,11,53,57,54,57,58,61,53,45,45,41,41,45,45,35,30,30,28,18,14,17,11,11,46,47,45,45,50,48,43,46,40,41,43,50,50,38,38,36,32,27,14,13,12,11,48,37,33,35,35,37,37,35,46,51,43,56,52,46,49,46,38,32,21,14,11,11,43,37,33,30,30,30,32,31,36,39,35,48,49,47,52,47,39,25,17,12,11,11,43,36,34,29,27,23,21,18,17,15,20,34,33,40,46,39,31,18,12,11,11,11,31,31,31,26,28,23,18,17,12,11,12,11,14,20,21,18,18,15,11,11,12,15,30,31,31,26,29,23,17,17,13,11,12,11,12,18,19,17,17,15,11,11,12,16],
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
