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
        texture=ImageTexture(url=['../../images/5/newport19-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59143480887271,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[61,62,65,65,64,63,61,63,65,66,69,68,69,74,73,71,70,70,73,74,73,76,79,63,63,63,63,62,62,62,64,65,67,68,70,71,74,74,73,73,74,74,73,72,74,75,60,64,65,65,65,65,66,66,67,65,64,66,67,69,71,72,74,75,75,75,76,76,76,60,63,65,67,67,68,70,70,67,65,61,61,61,63,66,67,69,71,73,75,76,77,75,59,61,63,66,68,71,75,74,69,65,62,56,54,56,62,64,63,66,69,71,73,74,73,60,60,60,63,67,72,74,73,69,66,62,58,55,54,57,58,57,59,64,67,68,71,73,59,59,60,61,65,69,72,70,71,71,67,62,60,58,58,58,58,61,63,66,67,70,72,56,57,60,61,62,64,68,67,69,71,69,64,64,64,61,62,63,65,67,67,66,67,67,56,57,59,60,60,60,62,66,69,70,70,68,67,66,65,65,65,65,66,65,67,63,62,55,57,59,60,59,59,62,67,70,71,71,70,67,65,65,64,64,64,64,63,61,57,55,53,56,59,61,61,61,64,69,72,73,72,68,64,62,59,56,57,58,60,61,60,57,54,50,53,58,62,64,65,67,70,71,71,72,70,64,60,54,51,50,50,54,57,60,63,62,47,51,53,56,61,63,64,65,65,67,70,71,67,64,62,64,62,59,60,63,61,59,60,48,49,49,52,56,59,60,60,61,64,67,69,67,66,69,71,71,68,66,67,64,60,58,50,49,50,51,53,55,56,56,58,60,64,67,66,66,66,67,70,72,68,65,61,58,58,49,51,54,55,52,53,54,55,57,58,61,63,64,65,65,63,66,68,66,63,60,58,59,48,52,56,56,53,53,53,55,57,59,60,62,63,62,62,62,65,67,63,61,61,60,60,47,51,52,52,52,51,51,53,56,57,58,60,62,62,62,64,67,69,64,62,62,61,61,50,51,50,50,51,51,51,51,52,53,56,60,63,63,63,64,65,64,63,62,61,59,58,50,49,49,49,50,50,50,49,49,50,55,58,61,62,63,65,64,61,61,62,61,58,60,48,48,47,48,50,50,50,50,49,50,53,56,59,63,67,68,66,62,61,62,62,61,61,48,49,48,48,50,52,51,49,49,50,53,55,58,62,66,66,63,60,61,61,60,61,61,47,48,47,47,49,52,50,48,48,50,53,55,58,61,64,65,61,59,60,60,60,61,61],
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
