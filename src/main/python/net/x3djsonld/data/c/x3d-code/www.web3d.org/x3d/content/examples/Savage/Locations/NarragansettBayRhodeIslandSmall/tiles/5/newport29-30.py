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
        texture=ImageTexture(url=['../../images/5/newport29-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.672143386647825,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[31,34,37,40,42,44,47,51,53,56,59,60,60,61,61,61,61,61,60,61,63,65,68,30,34,37,39,41,44,48,51,54,57,60,61,61,61,61,61,60,59,59,59,61,64,67,30,34,36,38,41,44,48,52,54,57,59,60,60,61,61,60,60,59,58,58,59,63,66,28,32,35,37,40,42,47,51,55,58,60,60,60,60,60,60,59,58,58,58,59,63,66,25,30,32,35,37,40,45,50,55,58,60,60,60,60,60,59,58,58,58,58,59,63,66,23,26,28,31,34,38,43,49,54,58,60,60,61,61,61,59,58,57,57,58,59,63,65,20,23,26,28,31,36,41,47,52,56,59,59,60,60,60,58,57,56,57,58,59,62,64,17,21,23,25,28,33,38,44,48,52,55,58,58,58,57,56,55,55,56,57,59,61,63,15,18,20,23,25,30,35,41,45,47,50,54,55,56,54,53,53,53,54,55,56,59,61,12,14,17,20,24,27,32,37,41,44,47,49,50,51,51,51,51,51,52,53,55,56,58,10,12,14,18,21,24,28,32,36,39,42,44,45,46,49,49,49,48,49,51,52,54,56,8,10,12,14,18,21,24,28,31,34,38,40,40,41,44,46,45,45,47,49,50,52,54,7,8,10,12,15,18,21,24,26,28,31,35,36,37,38,40,40,43,45,47,48,50,53,6,7,8,10,12,14,17,20,22,23,26,29,30,32,34,36,38,41,44,45,47,49,52,5,7,7,9,10,12,13,15,16,18,21,24,25,27,30,34,37,40,43,45,46,48,51,4,6,6,7,9,10,11,12,14,15,17,19,21,24,27,32,35,38,42,43,45,47,50,2,4,5,6,8,9,10,11,12,13,14,16,19,22,25,29,33,37,41,42,44,46,49,1,2,4,5,6,7,8,10,11,11,13,15,18,21,24,27,31,34,38,41,43,45,49,1,1,3,4,5,7,8,9,10,11,12,14,16,18,22,24,27,32,36,39,42,44,48,1,1,2,4,5,6,7,8,9,10,12,13,14,15,17,20,24,28,33,37,41,44,47,1,1,2,3,4,5,6,7,7,8,10,11,12,14,15,17,20,24,30,35,39,43,47,1,1,1,3,3,4,5,6,6,7,8,9,10,12,14,15,18,22,26,32,38,42,46,1,1,1,2,3,4,4,5,6,7,8,9,10,11,13,14,17,20,25,31,37,41,45],
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
