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
    GeoLOD(center=(41.76663080343592,-71.7692354927566,0.0),range=6150.5674,child1Url=['../../tiles/5/newport26-0.x3d'],child2Url=['../../tiles/5/newport26-1.x3d'],child3Url=['../../tiles/5/newport27-0.x3d'],child4Url=['../../tiles/5/newport27-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[178,173,168,152,144,137,140,141,155,159,154,141,140,138,137,132,125,125,129,142,151,155,166,171,164,150,141,142,147,156,162,167,173,161,146,139,136,129,129,125,134,137,150,152,149,157,157,146,137,145,153,157,164,166,159,152,147,141,134,132,133,131,137,140,143,143,145,137,136,136,141,151,161,159,156,159,152,147,148,139,135,137,140,136,131,133,135,137,129,133,134,138,147,156,163,171,161,161,157,155,148,136,140,148,143,136,129,131,131,133,130,128,128,141,154,162,176,182,177,170,170,164,156,148,148,146,139,134,131,132,131,131,141,128,133,143,160,171,177,185,183,181,176,168,163,152,146,142,137,135,135,135,140,142,140,133,135,146,162,172,179,187,189,186,173,166,159,153,142,141,142,137,136,137,142,143,136,134,139,155,160,170,179,188,184,180,170,164,150,146,144,145,141,137,136,134,131,134,140,138,140,154,161,171,176,179,179,174,164,155,148,153,155,151,142,133,127,125,128,128,136,134,141,151,161,167,176,174,174,172,166,160,168,166,157,149,137,131,128,127,129,129,132,139,150,156,160,165,169,171,175,169,172,176,177,170,156,142,133,129,131,131,135,135,137,143,157,166,164,162,167,175,181,182,182,189,180,163,152,143,141,134,135,138,148,150,140,150,166,178,174,166,170,179,188,193,197,192,175,158,156,156,150,136,134,148,151,154,149,159,171,177,178,174,179,189,191,197,193,180,165,160,169,170,158,140,143,155,163,169,150,165,176,182,183,180,186,189,191,185,182,176,173,164,168,169,152,142,154,162,173,178,154,165,174,184,183,178,182,184,177,174,174,179,178,176,166,158,145,149,162,178,189,191,160,166,171,177,181,179,170,161,161,161,167,174,176,173,162,146,140,152,168,178,182,183,160,167,170,172,166,167,161,158,155,156,159,171,168,158,148,143,145,156,166,174,178,176,162,163,164,165,166,166,167,162,162,164,177,188,187,172,165,161,157,155,164,173,180,181,165,157,160,158,166,177,171,157,162,172,182,185,191,180,177,174,168,164,168,178,187,189,167,157,160,158,165,177,170,157,163,172,181,185,190,180,178,175,168,165,169,179,187,189],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
