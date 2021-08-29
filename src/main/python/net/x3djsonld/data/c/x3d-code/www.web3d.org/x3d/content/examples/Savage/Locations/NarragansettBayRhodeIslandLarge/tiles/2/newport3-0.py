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
    GeoLOD(center=(41.79082087960392,-71.70327943062637,0.0),range=24602.27,child1Url=['../../tiles/3/newport6-0.x3d'],child2Url=['../../tiles/3/newport6-1.x3d'],child3Url=['../../tiles/3/newport7-0.x3d'],child4Url=['../../tiles/3/newport7-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[115,113,107,108,151,133,131,138,134,151,155,163,169,145,157,132,109,95,107,121,90,78,115,117,106,108,124,139,151,156,169,149,156,147,144,122,137,130,121,91,99,117,75,75,146,136,130,123,147,162,146,163,178,179,170,165,114,111,135,117,111,105,81,82,82,84,157,140,145,126,139,152,150,140,179,182,178,158,141,115,94,91,87,83,88,88,106,96,179,144,157,140,123,149,161,149,173,172,157,175,141,132,97,99,93,82,117,97,108,116,129,148,164,150,145,130,141,148,181,184,179,178,166,162,129,166,132,100,122,93,109,115,138,162,184,153,142,132,134,170,185,196,196,179,144,174,139,129,133,121,142,145,110,101,137,170,181,178,145,151,149,179,202,202,178,186,149,143,141,126,115,105,118,155,164,161,155,182,167,176,142,185,156,151,190,200,187,150,139,149,173,163,133,115,102,128,152,150,165,166,170,186,172,190,178,169,174,201,181,172,165,142,152,136,152,144,105,85,86,86,178,189,194,188,178,187,179,156,163,175,155,144,129,121,130,117,88,85,85,110,86,86,189,209,209,206,190,177,156,146,157,137,135,127,115,104,100,85,101,85,127,113,109,126,192,199,205,206,196,186,181,145,139,160,151,113,115,132,130,126,119,135,155,139,149,139,196,209,215,204,196,195,165,146,145,151,120,105,155,167,170,183,150,153,163,160,153,146,189,213,223,210,201,178,164,162,150,139,108,125,179,176,186,189,171,177,166,142,161,146,205,226,231,216,193,171,182,136,118,128,131,124,164,187,205,202,179,152,136,131,122,115,223,247,242,208,183,172,159,164,129,156,156,129,146,202,220,197,167,171,151,141,120,102,223,237,235,203,212,180,181,164,141,171,153,154,156,205,206,187,173,157,129,103,110,106,199,234,213,224,222,189,212,171,152,159,176,171,156,186,205,182,143,129,131,112,130,115,191,187,232,245,240,202,198,194,184,171,163,150,158,181,171,152,152,141,116,122,115,99,210,200,236,240,222,197,196,212,195,187,174,146,135,151,164,169,154,156,158,114,123,129,211,199,237,240,222,197,196,211,195,188,176,147,137,150,166,168,156,156,159,115,123,132],
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
