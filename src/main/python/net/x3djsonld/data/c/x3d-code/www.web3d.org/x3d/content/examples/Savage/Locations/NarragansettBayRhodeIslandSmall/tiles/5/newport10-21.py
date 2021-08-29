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
        texture=ImageTexture(url=['../../images/5/newport10-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[45,45,43,42,41,40,38,43,46,49,50,52,51,51,52,52,54,57,57,58,61,61,61,45,43,41,40,40,40,41,44,48,51,51,52,53,55,54,54,54,56,59,60,62,62,62,45,42,41,40,43,43,44,45,47,49,50,50,53,56,55,55,54,56,59,61,62,63,63,44,41,42,43,44,45,46,44,46,48,50,51,53,53,54,54,54,56,58,60,60,62,64,46,44,44,45,46,46,47,45,46,47,52,52,50,50,52,55,56,57,56,58,59,62,65,45,44,44,44,44,45,46,46,46,49,51,52,54,53,55,57,58,58,58,60,62,61,63,44,42,42,42,41,44,46,45,48,51,53,55,59,59,57,57,60,60,62,62,62,61,62,44,44,44,43,45,47,48,45,47,50,51,53,57,58,59,60,64,68,66,63,62,62,63,44,45,45,45,47,48,48,46,46,49,49,50,53,55,57,61,65,68,66,64,62,62,61,44,44,46,48,50,51,50,47,47,48,49,50,53,55,57,60,63,65,63,64,64,66,65,44,47,50,49,48,48,49,49,49,50,51,53,56,58,61,61,61,62,62,63,64,66,67,46,47,48,48,48,48,50,53,53,53,54,54,56,58,61,61,59,60,61,62,64,63,64,46,45,46,49,49,49,52,56,56,54,55,56,57,59,61,62,60,60,63,64,65,62,62,47,47,49,52,51,51,52,53,53,52,54,55,56,59,60,60,60,61,62,64,65,65,65,48,49,49,50,50,50,51,52,52,51,52,53,55,58,59,61,62,62,64,66,68,70,69,49,50,49,49,49,50,52,53,53,52,55,56,57,58,60,60,63,65,66,68,69,71,72,50,49,48,49,51,51,51,52,52,54,58,59,59,60,60,61,63,65,65,65,65,66,66,50,51,50,49,50,51,53,53,53,54,57,60,61,61,63,63,63,63,64,65,64,64,64,50,50,50,50,51,52,55,55,55,54,55,58,59,61,63,64,63,64,67,66,66,65,64,49,48,48,49,51,52,53,56,57,56,56,57,57,58,60,63,64,67,69,69,67,66,64,50,48,49,52,53,53,53,55,56,56,56,57,57,58,61,63,64,66,67,68,68,68,68,49,50,52,53,54,54,55,54,55,55,55,57,59,60,63,64,64,65,66,68,67,67,68,49,51,54,53,53,55,56,54,55,54,55,57,60,62,64,64,66,66,66,67,65,65,67],
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
