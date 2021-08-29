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
        texture=ImageTexture(url=['../../images/4/Malacca2-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[35,37,43,39,43,38,31,33,40,33,23,24,23,19,21,26,31,37,35,39,17,39,37,38,41,37,44,34,31,38,40,35,33,20,24,19,25,35,50,41,43,44,47,19,35,39,40,40,34,37,29,33,30,36,19,22,24,25,30,53,48,35,33,36,26,26,34,39,36,38,36,37,28,31,32,35,17,22,21,23,44,64,51,38,25,51,22,23,37,32,34,38,37,38,20,33,25,20,14,15,23,34,39,61,56,49,23,26,29,28,12,31,34,34,31,31,20,28,10,10,30,14,24,29,34,43,49,43,23,23,29,34,32,23,39,35,27,24,34,32,11,16,14,14,19,47,36,42,55,46,27,24,40,39,15,25,37,28,15,26,15,12,12,25,22,28,25,60,56,35,55,37,22,25,25,28,10,15,10,12,35,37,26,23,29,8,20,24,35,51,53,44,51,21,19,21,24,29,16,31,29,26,35,36,22,34,31,9,30,24,42,47,40,45,37,18,17,17,24,18,14,34,31,28,34,33,36,30,31,8,11,20,45,25,32,42,25,17,13,17,27,22,17,28,35,34,9,18,32,32,30,10,11,17,33,27,32,39,20,14,11,14,20,17,19,23,23,34,10,18,24,23,28,9,16,11,19,27,32,32,14,12,12,12,22,21,35,18,7,32,12,7,31,31,28,9,15,9,17,26,47,18,29,11,15,20,30,18,26,29,20,15,20,12,15,16,9,10,21,7,13,33,30,13,24,13,12,16,17,26,24,24,16,12,11,15,8,8,8,6,5,5,11,26,27,10,22,17,14,26,14,42,17,14,21,12,11,19,8,14,5,19,27,24,11,11,26,13,10,17,21,14,33,30,21,15,22,3,22,7,16,12,15,16,22,15,9,11,11,11,8,16,13,34,32,27,14,23,8,8,8,19,14,16,15,21,17,31,9,10,11,8,21,10,29,38,26,21,30,9,23,12,13,16,9,16,7,22,28,31,12,9,8,9,13,18,44,25,25,17,15,11,28,25,24,19,21,16,10,18,25,8,9,10,9,10,14,20,31,29,27,18,24,18,32,16,7,20,17,7,8,14,17,19,21,16,34,30,32,26,19,13,18,18,23,24,32,21,7,17,16,7,7,13,20,20,18,15,36,29,32,30,19,12,17,15],
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
