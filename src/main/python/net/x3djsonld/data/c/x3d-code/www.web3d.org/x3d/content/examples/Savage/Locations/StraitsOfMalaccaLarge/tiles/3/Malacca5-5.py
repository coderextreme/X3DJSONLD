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
    GeoViewpoint(description='GeoViewpoint_3_55',geoSystem=['GDC'],position=(3.3692936899251933,103.92975052808853,224011.88563999312),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(3.3692936899251933,103.92975052808853,0.0),range=268814.25,child1Url=['../../tiles/4/Malacca10-10.x3d'],child2Url=['../../tiles/4/Malacca10-11.x3d'],child3Url=['../../tiles/4/Malacca11-10.x3d'],child4Url=['../../tiles/4/Malacca11-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca5-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.3619186420774487,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.09626191,zDimension=22,zSpacing=0.09594048,height=[179,36,91,94,231,28,45,27,45,37,43,4,214,3,2,3,3,2,3,4,4,4,15,62,292,212,173,219,31,26,15,8,1,3,4,4,3,4,3,2,3,3,3,3,61,70,286,271,446,127,29,31,20,6,1,2,3,4,3,5,4,2,2,3,2,3,78,94,131,342,233,218,13,11,10,3,3,1,3,2,1,5,3,2,3,2,3,4,103,110,126,99,133,35,53,4,3,5,6,4,0,0,4,4,2,4,2,0,1,3,61,78,126,76,22,19,4,6,4,5,4,5,2,87,3,2,4,5,4,3,3,2,53,82,30,20,7,14,5,4,5,7,3,3,3,3,1,1,2,3,5,4,5,4,77,35,69,66,23,5,4,3,5,4,5,-7,-9,-10,-9,-12,-11,-11,-11,-8,-8,-8,46,28,22,17,35,23,5,3,5,4,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,74,222,60,30,30,17,5,5,5,3,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,46,45,71,26,30,7,6,5,5,7,4,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,35,43,55,31,34,8,4,6,6,5,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,49,27,13,34,29,6,6,5,5,8,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,89,46,33,10,19,6,3,3,6,7,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,89,53,55,13,9,4,5,5,4,5,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,112,630,439,15,6,4,4,6,5,3,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,692,199,33,30,83,5,4,4,6,6,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1177,86,27,114,26,11,6,6,6,5,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,427,151,356,75,65,7,5,6,5,6,5,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,375,167,63,23,10,15,5,6,8,7,6,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1075,136,177,35,10,6,6,6,7,6,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1079,122,213,40,9,6,6,6,6,4,7,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
