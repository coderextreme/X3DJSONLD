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
        texture=ImageTexture(url=['../../images/5/newport18-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,6,10,15,19,25,31,36,42,47,52,51,51,54,58,62,64,60,55,54,55,55,56,0,5,9,14,18,25,31,36,41,45,48,48,49,52,57,63,65,59,54,55,55,56,57,0,6,9,13,18,25,30,35,39,42,45,47,47,49,53,60,64,62,57,56,55,55,55,0,6,9,11,16,22,26,31,37,43,46,46,48,51,53,57,60,62,59,57,55,55,55,0,2,9,12,16,21,26,32,38,45,47,48,52,56,55,55,56,57,56,56,54,54,55,0,1,8,12,15,20,26,33,38,43,47,49,52,53,53,55,56,57,56,58,56,54,54,0,4,6,9,15,20,28,35,38,39,43,47,50,53,53,54,56,57,58,59,57,55,55,0,4,6,8,14,20,28,35,36,38,42,48,52,53,53,51,53,56,57,57,56,55,56,0,6,9,9,12,18,25,31,36,40,44,50,51,50,50,50,52,53,54,56,56,56,58,1,6,8,10,12,19,26,32,35,38,41,46,49,50,50,49,50,52,53,55,56,57,56,1,2,5,9,13,17,23,27,30,35,40,45,48,48,48,48,50,53,53,53,55,56,56,0,0,4,7,8,12,14,16,22,29,37,44,46,46,47,49,51,51,50,51,53,56,55,2,3,4,6,8,12,12,12,16,24,32,38,42,44,48,52,53,51,50,50,51,54,53,3,1,2,5,8,8,10,12,16,24,30,36,42,45,49,52,51,50,49,48,49,50,50,1,0,2,7,7,7,10,13,17,24,30,35,40,45,48,51,50,49,48,48,48,49,49,1,1,2,3,4,6,10,14,17,23,28,34,40,44,46,48,50,47,47,50,50,50,49,1,1,2,4,4,6,8,11,16,22,28,32,38,44,46,47,50,48,46,48,50,51,49,4,2,2,4,5,6,8,12,18,22,25,30,36,42,44,46,48,48,46,47,48,50,51,4,2,1,3,4,7,12,13,17,23,28,33,39,42,43,44,47,49,49,48,47,49,51,3,3,4,4,4,6,11,13,16,20,26,31,37,43,43,44,47,51,51,50,49,50,52,4,5,6,5,4,4,8,13,16,19,24,29,35,43,45,46,49,53,53,53,54,53,55,5,5,6,6,6,7,11,16,18,20,25,30,36,42,46,48,52,56,57,57,56,55,55,5,5,6,6,7,9,13,18,19,21,26,31,36,42,46,50,54,57,58,57,56,55,54],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
