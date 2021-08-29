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
        texture=ImageTexture(url=['../../images/5/newport16-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[49,50,50,52,52,52,51,51,53,54,56,57,58,59,62,64,64,64,64,66,68,70,70,44,46,47,49,50,51,50,51,52,53,54,56,57,59,60,63,64,65,64,65,67,69,70,42,43,45,46,48,48,48,50,51,52,54,55,56,58,60,62,63,65,67,68,67,67,68,40,42,43,44,46,46,47,47,49,52,53,54,56,56,59,61,61,62,65,66,66,66,66,38,40,40,42,43,44,45,46,48,50,52,54,55,56,57,60,61,62,64,64,64,65,66,34,37,39,40,40,42,43,45,46,48,50,52,53,55,57,58,60,61,62,63,63,65,65,32,33,36,38,39,41,42,43,45,46,50,52,53,54,55,56,58,59,59,60,62,64,64,32,32,33,35,37,39,40,42,44,46,48,52,53,53,52,53,54,55,58,59,60,61,62,32,32,32,33,35,38,40,41,43,45,45,48,51,50,50,50,50,52,55,55,56,57,59,32,32,32,32,33,37,40,40,41,42,41,43,45,46,48,50,50,53,54,53,55,57,59,32,32,32,32,33,38,41,41,40,40,40,41,42,44,46,48,49,51,52,51,52,55,58,32,32,32,32,32,34,39,41,40,39,39,40,43,44,45,46,47,48,50,49,51,53,54,32,32,32,32,32,32,38,40,39,39,38,38,42,43,43,44,46,46,47,49,50,52,51,32,32,32,32,32,32,36,37,36,37,39,38,39,41,42,42,44,46,47,49,49,49,48,32,32,32,32,32,32,32,33,33,34,37,38,38,42,43,43,44,45,46,47,46,47,48,32,32,32,32,32,32,32,32,32,33,36,38,40,42,44,45,44,44,45,45,46,47,49,32,32,32,32,32,32,32,32,32,33,37,40,41,44,44,45,46,45,44,44,46,46,48,32,32,32,32,32,32,32,32,33,36,39,40,42,44,44,45,45,45,45,45,46,46,47,32,32,32,32,32,32,36,37,40,42,42,42,42,42,43,44,44,43,45,46,46,47,48,32,32,33,38,42,43,40,42,43,44,43,42,41,41,41,41,41,43,45,46,46,47,48,33,33,34,47,47,46,45,44,44,44,44,43,42,41,41,41,42,43,46,46,47,48,47,40,43,45,48,47,47,43,43,43,43,43,44,43,43,43,42,43,45,47,46,47,48,48,42,47,50,48,46,44,43,44,44,42,43,45,43,44,43,42,43,46,47,46,47,48,49],
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
