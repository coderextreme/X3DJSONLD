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
        texture=ImageTexture(url=['../../images/4/Malacca9-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.3890484551644233,102.96356269830186,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[38,29,42,13,21,36,36,37,44,25,12,32,32,31,27,24,34,32,31,29,31,13,40,46,57,17,30,46,19,27,36,31,28,35,34,30,31,20,33,34,31,35,34,34,32,42,28,32,25,34,26,27,81,48,37,33,33,30,31,27,35,33,32,33,33,35,48,27,22,12,38,14,25,28,66,30,20,33,31,34,28,30,34,34,37,35,35,30,85,22,33,31,20,27,22,32,128,22,28,33,31,27,25,30,34,33,37,35,34,35,62,56,35,19,11,21,22,19,48,16,29,31,31,27,32,30,33,35,36,33,31,13,80,43,44,23,15,25,23,36,41,13,31,30,31,22,33,26,32,34,34,33,15,9,40,32,11,15,29,21,18,19,13,36,32,30,25,33,32,26,30,36,29,13,25,8,16,64,26,33,25,14,21,9,16,16,33,35,33,33,34,11,22,28,27,8,11,12,84,127,40,38,25,30,25,19,26,18,13,12,34,33,31,21,26,26,27,20,18,24,144,117,75,35,43,30,22,20,13,31,19,12,17,16,25,29,12,18,8,26,18,11,96,105,103,51,26,31,13,19,12,13,10,32,15,8,11,10,15,15,16,8,7,4,203,299,138,59,37,26,18,20,34,12,11,10,18,8,21,11,9,13,6,15,6,5,398,294,198,45,47,30,21,19,28,12,12,19,15,7,18,20,6,11,6,18,15,4,286,88,46,30,38,32,32,29,23,14,14,10,10,10,9,21,11,13,9,6,5,10,148,79,74,46,22,24,27,35,31,19,12,10,11,10,10,25,27,9,17,9,13,13,72,70,41,44,50,27,34,34,29,20,18,13,11,9,10,28,26,7,11,10,12,6,79,68,67,38,32,26,40,28,23,26,13,12,11,10,11,31,30,14,7,7,12,11,72,69,55,53,32,27,47,37,23,27,26,16,20,10,11,33,12,11,10,4,9,3,86,90,48,69,31,44,36,43,29,45,27,21,22,13,10,34,8,8,4,11,9,3,69,68,87,30,34,48,48,30,42,39,30,24,17,34,31,15,9,7,7,11,4,3,48,68,37,34,60,52,50,93,55,33,28,25,17,34,29,10,11,8,7,7,2,3,49,66,36,35,56,46,47,112,67,31,32,26,19,35,30,11,14,8,7,7,2,3],
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
