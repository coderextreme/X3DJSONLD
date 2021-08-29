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
        texture=ImageTexture(url=['../../images/4/Malacca1-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[25,24,34,31,37,35,21,20,22,23,20,22,16,20,18,20,25,48,47,56,58,82,35,23,41,36,44,29,26,21,23,22,22,16,20,21,17,31,39,61,63,74,75,77,34,34,28,29,28,37,24,45,25,22,21,16,18,21,21,30,46,58,58,76,65,62,38,43,40,44,45,49,39,28,26,26,23,18,20,22,25,48,60,59,72,66,73,70,36,42,42,45,52,45,40,28,27,27,30,22,23,23,27,54,68,48,58,70,63,49,39,35,45,47,52,32,52,29,29,32,25,29,28,23,35,66,54,50,56,47,56,53,45,48,42,55,51,29,31,29,30,28,24,22,25,21,38,56,58,42,50,37,46,37,50,48,50,47,43,30,30,32,31,25,21,20,19,33,33,54,42,41,44,35,42,34,53,33,53,54,48,54,31,28,29,22,20,29,17,16,28,44,47,38,38,31,36,31,55,55,53,53,29,27,30,27,24,18,36,27,26,16,24,33,23,23,23,25,26,26,56,59,30,29,29,39,40,22,34,15,30,15,16,26,17,23,15,16,17,19,16,23,35,27,32,53,55,50,46,42,43,16,28,14,14,14,13,13,31,26,11,8,9,12,44,32,57,25,29,49,46,45,43,42,36,39,36,25,12,34,39,16,9,5,8,7,51,31,42,28,45,45,47,49,46,43,38,27,43,38,19,16,37,15,11,5,4,9,48,46,54,51,44,44,44,47,46,44,39,26,42,35,16,16,39,20,19,25,8,9,40,47,47,49,47,42,42,45,48,48,43,44,42,44,31,18,22,21,20,12,5,14,41,49,39,48,49,43,43,43,40,43,48,47,41,44,40,20,30,28,23,9,29,29,37,45,47,45,43,46,42,43,40,44,47,35,39,43,43,29,29,21,6,32,22,37,41,43,31,34,42,42,34,45,42,32,38,37,32,42,34,28,33,21,17,36,22,56,32,31,44,36,39,45,36,41,37,33,37,45,38,40,32,19,22,24,25,20,29,37,27,37,42,37,38,40,35,36,35,38,35,33,37,35,21,23,30,29,37,24,30,38,38,39,43,38,42,38,32,36,39,33,26,24,23,19,22,26,37,42,35,39,18,33,35,37,43,39,43,38,31,33,40,33,23,24,23,19,21,26,31,37,35,39,17,39],
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
