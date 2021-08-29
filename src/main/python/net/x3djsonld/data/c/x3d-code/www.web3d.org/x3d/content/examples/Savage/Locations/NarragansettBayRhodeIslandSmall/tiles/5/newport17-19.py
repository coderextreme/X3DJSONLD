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
        texture=ImageTexture(url=['../../images/5/newport17-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.57529309331769,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[14,15,22,28,33,33,35,37,37,37,38,39,39,39,38,37,36,35,36,38,38,38,42,5,11,26,33,35,35,36,38,39,40,40,40,41,43,43,42,40,39,39,40,41,42,46,9,23,30,34,36,37,39,39,40,40,40,41,43,46,49,47,44,42,41,41,42,45,46,19,29,30,32,35,37,38,39,39,41,42,45,48,51,51,51,47,44,43,45,47,47,46,24,28,30,32,34,35,37,39,41,43,46,48,50,51,50,51,49,46,46,48,49,49,49,26,29,32,32,34,38,40,41,42,44,46,46,47,49,49,49,49,47,47,49,50,53,55,27,30,32,33,35,38,39,41,45,47,47,47,46,46,48,49,49,48,49,52,53,56,58,28,30,32,34,37,39,40,41,45,48,49,49,49,48,49,50,50,51,53,53,55,58,60,27,28,31,36,39,39,41,45,49,50,51,51,51,52,52,52,52,53,53,54,56,60,60,24,26,30,36,38,40,45,46,48,50,50,51,53,53,54,54,54,54,53,52,54,56,57,23,24,28,33,36,40,46,48,50,51,52,53,56,56,56,56,56,54,52,49,50,52,54,22,21,23,31,36,41,46,48,49,52,55,58,61,59,58,57,57,55,51,49,51,54,55,21,22,25,31,36,40,45,49,51,55,61,63,65,62,58,57,56,56,52,49,51,55,56,19,20,23,30,34,38,42,45,50,55,62,66,68,65,62,60,56,56,54,51,52,53,53,17,19,22,29,34,37,40,44,47,53,61,67,69,67,63,61,58,58,56,52,53,53,53,14,17,22,29,35,40,44,47,48,51,54,60,62,61,60,58,60,62,59,52,50,52,55,14,16,21,28,34,39,43,46,48,51,52,53,55,55,57,60,64,66,61,54,50,52,54,13,16,19,25,31,37,43,47,49,50,49,49,51,53,55,58,60,62,59,55,54,56,55,9,13,17,24,31,36,42,47,50,48,47,48,49,54,55,55,56,57,56,56,59,58,55,5,10,15,22,29,33,39,46,51,52,53,53,54,56,57,56,56,55,55,59,61,60,57,1,8,14,21,25,30,36,43,48,52,56,55,53,54,57,57,56,54,55,56,57,56,55,0,6,11,17,21,26,32,38,43,49,53,52,51,55,58,60,62,59,55,54,55,54,55,0,6,10,15,19,25,31,36,42,47,52,51,51,54,58,62,64,60,55,54,55,55,56],
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
