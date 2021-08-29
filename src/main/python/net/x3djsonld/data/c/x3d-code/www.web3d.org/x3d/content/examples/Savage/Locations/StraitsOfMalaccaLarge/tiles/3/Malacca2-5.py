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
    GeoViewpoint(description='GeoViewpoint_3_25',geoSystem=['GDC'],position=(-2.674956597161276,103.92975052808853,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(-2.674956597161276,103.92975052808853,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca4-10.x3d'],child2Url=['../../tiles/4/Malacca4-11.x3d'],child3Url=['../../tiles/4/Malacca5-10.x3d'],child4Url=['../../tiles/4/Malacca5-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.6823316450090204,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[496,292,123,137,104,131,151,98,74,70,90,83,74,74,44,41,22,22,23,21,20,16,1206,379,158,84,74,103,113,80,59,80,65,49,47,54,38,36,37,19,30,24,14,14,547,210,133,97,84,77,108,62,52,61,40,35,42,42,46,37,22,18,24,20,12,13,167,101,95,89,58,85,83,95,51,34,48,21,27,48,41,31,29,22,21,13,14,15,107,78,76,67,67,60,52,101,61,48,61,60,30,14,21,22,16,25,8,15,10,11,87,71,70,53,54,38,40,65,65,66,28,30,23,10,11,28,17,19,5,7,6,6,53,49,52,43,41,35,57,62,60,45,36,15,13,10,11,11,3,6,4,9,15,10,49,35,41,40,36,52,65,68,42,23,14,14,6,4,4,4,12,9,5,7,7,7,42,42,30,35,28,57,42,57,30,16,17,11,31,25,35,20,12,20,11,5,5,6,43,40,42,49,23,20,15,34,18,25,13,23,31,23,17,18,4,5,4,7,6,8,39,36,43,48,31,29,34,57,33,16,34,25,11,12,6,3,4,4,6,3,4,4,49,27,34,46,26,65,59,22,36,33,23,13,5,4,9,6,2,3,0,3,4,5,58,39,83,81,64,33,52,33,55,43,33,20,12,8,5,4,2,3,6,4,2,3,65,66,65,58,53,38,65,63,53,43,26,18,15,15,5,4,4,0,8,4,15,3,75,93,101,52,61,65,52,49,42,23,30,39,42,21,4,4,4,4,4,1,13,4,54,69,112,96,82,52,41,24,17,36,24,17,6,5,5,4,7,4,5,19,5,4,43,57,94,91,67,41,35,6,22,18,5,9,6,8,24,9,5,21,22,10,5,3,59,44,65,85,47,54,32,9,32,27,8,10,32,27,14,15,16,15,15,13,2,4,67,38,54,74,61,27,12,38,15,5,28,25,23,32,24,17,0,5,2,1,2,1,81,33,51,76,79,38,43,45,28,6,19,35,48,31,22,20,12,3,2,1,3,2,39,28,23,35,25,72,43,47,30,20,16,29,31,28,21,4,4,1,1,2,3,2,27,26,20,33,28,72,41,43,32,23,16,31,29,27,20,4,4,1,2,1,1,2],
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
