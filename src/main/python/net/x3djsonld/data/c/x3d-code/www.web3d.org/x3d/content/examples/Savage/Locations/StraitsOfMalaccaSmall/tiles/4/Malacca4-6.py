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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca4-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[13,2,3,5,0,0,-1,7,4,5,30,34,32,37,34,28,28,29,29,22,27,28,11,4,4,7,1,-2,2,4,7,30,28,31,32,34,29,30,34,34,31,29,30,28,8,6,13,8,0,0,0,6,6,28,31,32,34,31,31,31,25,30,33,25,29,30,27,5,5,6,-1,5,3,7,21,25,29,29,23,28,30,26,31,33,33,29,25,26,5,5,3,6,4,2,1,2,27,28,28,30,28,28,31,26,32,30,29,33,19,27,4,6,5,6,1,4,8,5,30,29,29,29,28,30,36,34,26,29,31,28,29,23,12,3,9,5,0,6,6,21,29,29,30,28,27,30,35,30,26,29,22,19,24,6,7,0,6,1,3,4,5,25,30,32,31,34,32,29,30,25,23,27,25,27,2,6,9,4,2,1,3,4,24,25,33,31,33,36,31,28,30,25,27,30,21,27,4,15,8,21,7,0,5,9,7,29,30,34,36,36,32,31,31,25,31,24,24,18,15,3,14,5,3,1,-7,2,22,30,28,34,31,32,26,34,34,6,10,4,3,10,15,6,19,0,0,1,0,1,26,26,28,29,27,26,26,24,27,5,8,3,3,6,7,7,24,18,0,2,0,0,26,24,29,3,31,25,9,29,25,4,1,5,9,4,4,13,19,6,0,0,0,0,4,28,21,16,8,24,2,20,9,7,3,7,8,2,7,3,27,4,-13,-13,0,0,24,24,22,21,1,2,5,13,0,6,4,4,12,8,1,9,27,23,-3,-13,0,0,14,24,17,11,4,4,2,6,7,4,7,6,12,1,10,7,8,7,0,1,0,0,-8,27,22,26,14,12,9,5,4,6,2,6,4,10,6,7,23,1,8,0,-7,-2,-5,0,27,18,20,4,-10,1,5,6,5,3,7,2,7,5,5,-5,-2,-2,-3,0,-3,0,0,1,-17,-16,0,0,0,2,4,5,3,4,5,11,11,3,5,-2,-1,-2,0,-14,0,-6,-14,-8,-3,-10,-11,5,1,6,2,1,5,8,16,-7,-2,-2,0,0,0,0,-7,-6,-6,-2,-6,-11,-6,-2,1,11,0,1,4,8,-6,-1,-14,8,8,0,-1,-4,-6,-6,-6,-8,-9,-5,-1,-9,-7,1,2,4,5,6,-16,-2,-14,8,8,0,-1,-4,-6,-6,-6,-8,-9,-5,-4,-11,-19,-8,3,5,4,4],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
