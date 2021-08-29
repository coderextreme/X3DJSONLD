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
        texture=ImageTexture(url=['../../images/5/newport19-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59143480887271,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[5,5,6,6,7,9,13,18,19,21,26,31,36,42,46,50,54,57,58,57,56,55,54,2,3,5,7,10,11,14,19,20,23,28,31,36,42,48,52,55,57,58,57,58,58,57,2,6,8,10,13,12,14,16,20,24,26,30,35,42,49,54,58,57,57,57,60,59,60,1,5,9,11,13,14,16,17,21,24,26,30,34,40,47,51,54,60,61,62,65,65,64,0,3,6,8,13,15,17,20,23,27,30,31,34,41,47,49,52,56,60,61,64,66,66,2,4,6,11,15,15,16,21,21,25,30,32,33,38,45,50,52,52,53,56,59,59,63,3,4,4,9,14,15,16,21,21,23,27,30,32,36,43,48,50,50,51,53,54,54,57,3,3,3,5,11,14,16,20,23,24,24,29,34,37,41,43,46,48,48,50,55,54,55,3,5,6,8,11,13,15,19,25,27,27,31,33,34,36,38,40,43,44,45,48,47,49,3,4,6,7,11,12,13,17,22,25,28,28,31,32,32,34,37,40,41,41,44,46,47,0,0,2,7,10,12,13,15,17,20,23,25,27,28,28,30,32,37,38,38,41,45,45,0,0,0,4,10,12,13,12,14,17,21,22,24,26,27,28,30,33,36,36,38,40,39,0,0,0,1,7,9,10,9,10,14,18,19,21,25,25,25,27,29,31,33,34,35,32,0,0,0,0,3,6,6,6,7,11,13,14,17,19,19,20,20,23,25,26,27,27,27,0,0,0,0,0,4,6,6,7,8,11,13,13,14,16,16,18,22,23,23,24,25,25,0,0,0,0,0,2,4,5,6,7,10,12,12,13,14,14,16,19,22,21,21,20,20,0,0,0,0,0,1,3,4,5,5,6,10,11,12,13,15,16,17,19,18,15,13,14,0,0,0,0,0,0,3,4,4,4,4,5,6,9,11,14,15,15,14,13,14,15,17,0,0,0,0,0,1,3,3,2,2,1,1,3,6,9,13,13,13,13,13,15,17,18,0,0,0,0,0,0,2,1,0,2,2,1,2,4,7,12,13,13,13,13,15,17,18,1,2,2,0,0,0,1,0,0,1,2,2,1,2,5,8,11,10,11,12,14,16,20,0,1,1,0,0,0,0,0,0,0,0,1,2,4,5,6,7,8,9,12,14,16,18,0,0,0,0,0,0,0,0,0,0,0,1,3,5,6,5,6,8,9,11,14,15,17],
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
