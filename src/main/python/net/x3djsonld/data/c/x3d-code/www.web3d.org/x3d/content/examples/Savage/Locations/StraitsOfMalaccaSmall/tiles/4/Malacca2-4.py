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
        texture=ImageTexture(url=['../../images/4/Malacca2-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[38,34,33,30,42,32,26,27,23,22,18,25,37,42,38,34,30,26,21,26,36,35,45,52,45,43,39,26,22,20,23,43,20,17,27,33,35,33,31,26,24,21,38,37,39,35,44,35,30,27,21,21,19,41,35,31,26,30,33,34,35,28,24,17,32,35,37,34,34,47,29,27,33,20,19,41,34,37,38,34,36,40,37,39,23,18,27,34,38,35,34,30,38,44,24,31,21,36,35,32,32,32,38,41,42,39,33,20,22,37,36,33,33,33,50,48,45,36,22,29,33,33,26,30,36,42,43,38,35,23,16,12,35,32,33,30,38,46,44,29,37,19,36,31,20,33,40,45,43,33,34,15,12,32,33,34,32,29,47,39,45,37,34,32,27,32,28,36,40,30,41,41,37,23,11,15,32,31,55,39,32,48,43,40,37,34,22,27,26,30,35,33,42,41,39,18,16,10,29,31,47,28,37,45,41,38,37,37,34,16,26,34,27,30,41,35,36,26,17,16,29,26,27,25,24,36,23,41,39,40,35,18,22,35,25,31,40,37,39,24,17,14,25,21,24,23,21,35,39,37,34,36,31,25,25,27,24,33,37,35,29,35,22,17,21,23,25,17,20,20,34,35,39,36,35,31,13,26,30,38,40,41,41,39,35,19,38,33,22,21,23,36,36,40,35,36,34,33,17,20,33,34,34,39,36,36,28,35,29,30,27,21,16,22,37,38,33,33,29,32,18,12,27,35,29,29,16,18,16,26,32,29,26,19,15,28,38,32,37,34,34,27,9,18,16,11,26,18,10,14,12,24,32,28,19,14,24,13,31,34,36,32,29,11,12,16,16,13,11,10,26,19,29,17,30,16,32,38,31,18,16,17,17,17,14,8,19,23,9,10,16,16,28,24,17,21,23,20,39,37,33,9,13,16,29,21,23,21,32,25,25,7,24,29,26,25,29,14,19,17,15,35,27,15,33,23,38,28,29,39,36,40,30,18,10,32,26,14,11,30,18,29,17,35,14,34,47,34,57,49,58,45,36,30,18,13,12,12,40,25,12,15,16,18,15,16,26,48,66,63,47,44,69,45,39,31,20,13,11,24,48,41,22,24,15,16,15,18,33,51,68,63,44,44,70,45,40,32,20,14,11,23,49,42,27,23],
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
