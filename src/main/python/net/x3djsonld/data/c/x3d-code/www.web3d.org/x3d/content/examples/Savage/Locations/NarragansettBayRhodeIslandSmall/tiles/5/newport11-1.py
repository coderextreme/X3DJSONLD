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
        texture=ImageTexture(url=['../../images/5/newport11-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[63,66,67,68,68,67,68,69,63,59,59,61,59,58,57,55,52,49,45,41,38,38,35,63,65,66,66,66,66,67,66,60,55,56,59,58,59,56,56,53,51,47,43,40,36,33,62,63,66,66,67,67,65,64,58,55,57,58,56,57,57,55,52,48,45,41,38,38,34,60,62,66,67,67,67,65,62,58,57,57,56,56,56,54,54,50,45,42,40,37,35,32,59,63,66,66,64,64,64,60,59,60,58,57,57,55,52,51,49,45,42,40,36,32,29,58,60,64,65,64,64,63,60,58,56,55,54,54,53,51,48,46,45,43,41,37,31,28,57,58,60,62,63,64,62,58,57,55,53,53,53,52,51,47,45,44,42,40,35,30,29,57,59,60,61,62,63,60,58,58,57,55,54,53,51,50,48,47,44,40,36,32,29,27,59,59,59,59,59,59,59,59,59,57,54,53,50,49,48,46,46,44,40,36,32,29,27,58,58,58,56,56,58,60,61,60,58,54,52,50,48,47,45,44,43,39,36,33,30,28,58,58,59,56,55,58,59,58,57,55,52,51,50,48,47,45,43,41,38,37,36,32,30,59,58,54,52,52,56,57,56,54,52,52,51,49,48,47,45,43,39,37,37,34,31,29,56,53,51,52,55,56,57,57,57,55,52,50,48,47,45,43,41,38,37,36,33,29,26,54,52,50,53,56,55,56,58,59,57,53,50,47,44,42,40,39,38,37,35,32,28,25,53,52,52,55,56,56,55,55,57,58,55,52,47,43,41,38,37,36,35,34,31,28,26,50,52,54,54,56,56,54,53,53,54,53,52,49,44,41,38,35,34,33,30,27,26,24,50,54,55,55,56,56,55,54,52,53,53,50,45,42,40,37,33,32,32,29,25,23,22,51,52,54,54,54,55,55,54,54,55,52,47,42,41,40,36,34,32,30,27,25,23,19,53,52,54,54,53,52,52,51,50,49,49,46,44,41,39,36,36,34,29,24,23,21,16,54,54,54,54,53,53,51,51,49,47,46,44,41,38,36,34,33,31,27,22,20,18,14,53,53,55,56,54,51,53,53,50,48,46,42,38,33,33,31,30,27,24,21,17,14,12,52,53,54,55,54,52,53,52,50,48,45,42,38,35,33,32,27,22,18,16,12,10,9,52,54,53,53,53,53,53,52,49,46,45,42,39,36,34,31,25,19,15,13,10,9,8],
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
