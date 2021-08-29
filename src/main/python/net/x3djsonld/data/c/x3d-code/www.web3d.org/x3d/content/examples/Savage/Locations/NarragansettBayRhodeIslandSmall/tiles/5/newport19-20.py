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
        texture=ImageTexture(url=['../../images/5/newport19-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59143480887271,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[54,54,54,54,53,51,49,48,47,46,46,45,45,45,44,45,46,46,50,53,57,62,61,57,57,56,56,56,54,52,51,50,48,47,46,46,45,44,44,45,44,47,50,54,60,63,60,61,58,56,57,55,54,52,52,50,47,44,43,43,44,43,45,45,47,48,51,56,60,64,61,58,56,55,53,52,50,49,48,46,44,42,43,42,41,44,46,48,49,51,55,60,66,63,58,56,52,50,48,46,45,45,45,45,44,41,40,40,43,46,47,49,52,56,59,63,64,59,53,49,47,48,47,46,48,48,48,47,42,41,41,45,47,49,49,52,56,60,57,60,55,51,48,48,47,47,46,47,48,49,50,44,44,46,45,46,49,49,52,55,59,55,55,52,48,46,45,42,42,43,43,44,47,49,45,46,47,45,46,48,49,52,55,56,49,49,47,47,45,42,40,40,42,44,45,45,45,43,44,46,45,46,48,48,51,54,56,47,45,42,42,42,41,38,39,40,41,41,41,38,40,43,45,46,46,46,47,49,53,55,45,43,39,37,38,39,37,37,38,38,38,38,37,38,40,42,43,45,46,48,49,51,53,39,38,36,35,35,37,38,39,40,39,39,40,38,36,36,39,40,42,44,46,48,48,50,32,31,32,33,33,33,36,36,34,33,35,35,37,36,35,37,39,41,43,45,45,46,47,27,27,28,29,32,32,35,35,32,31,31,32,35,37,37,39,41,42,44,45,46,46,48,25,24,24,28,32,34,32,34,35,33,32,34,36,37,38,39,41,44,46,48,48,49,50,20,18,19,28,31,34,35,35,34,32,32,32,33,37,37,37,39,42,43,45,45,46,49,14,16,21,31,30,31,33,31,30,31,32,31,31,35,36,37,39,41,42,43,43,44,48,17,21,25,27,27,27,28,29,30,32,33,33,34,36,38,39,40,41,42,43,43,45,47,18,21,23,24,24,26,27,29,30,30,32,33,36,37,38,39,41,42,42,44,47,49,50,18,21,23,23,24,25,25,26,28,30,31,32,33,36,38,40,42,43,45,46,49,50,50,20,23,23,24,25,25,25,26,28,30,30,30,32,36,38,40,42,46,48,48,48,48,48,18,21,22,21,21,22,24,25,27,29,30,31,36,40,40,40,42,45,46,47,48,47,48,17,19,20,20,20,21,24,25,27,29,31,32,36,41,41,40,42,44,46,48,49,47,47],
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
