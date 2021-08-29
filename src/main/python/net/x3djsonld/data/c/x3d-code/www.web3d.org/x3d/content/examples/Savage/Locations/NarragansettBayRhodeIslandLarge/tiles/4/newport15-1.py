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
    GeoLOD(center=(41.86339110810791,-71.72526478466978,0.0),range=6150.5674,child1Url=['../../tiles/5/newport30-2.x3d'],child2Url=['../../tiles/5/newport30-3.x3d'],child3Url=['../../tiles/5/newport31-2.x3d'],child4Url=['../../tiles/5/newport31-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[176,165,159,155,154,153,149,147,154,153,155,152,145,140,141,139,137,134,123,109,108,110,174,165,161,159,165,163,160,153,164,156,157,155,146,136,134,132,141,135,127,112,113,115,173,167,163,173,183,180,168,159,162,158,154,155,146,131,123,126,138,127,112,109,120,121,171,169,164,180,189,180,165,162,155,156,148,155,138,125,121,121,112,112,114,126,118,117,169,168,172,186,189,175,161,154,140,139,139,124,122,119,115,112,121,130,128,128,132,129,167,161,171,178,180,166,150,142,135,138,126,122,117,115,115,123,133,143,138,137,129,127,162,161,166,178,164,157,146,136,134,133,125,121,118,117,121,133,141,140,148,144,135,133,164,161,163,162,157,148,141,144,141,128,127,124,122,132,133,142,140,148,157,142,137,133,166,162,160,162,155,145,148,159,154,137,133,124,130,141,148,152,151,155,160,141,138,138,171,167,172,168,158,149,160,170,160,142,126,127,132,140,149,153,156,157,161,153,151,144,172,170,175,168,158,152,164,167,157,138,129,131,135,145,168,182,174,161,161,167,149,145,170,167,167,165,162,164,172,167,154,143,132,136,137,142,172,186,176,168,164,162,144,139,173,167,171,167,171,182,181,169,156,145,137,142,141,144,170,178,173,164,160,152,148,147,179,179,176,173,186,194,191,178,162,151,154,147,141,142,163,172,170,165,171,157,154,156,180,177,181,187,193,201,192,180,173,159,171,158,143,144,151,167,167,166,171,163,164,168,182,181,188,200,209,208,194,184,176,160,163,145,145,149,151,152,165,172,178,175,167,167,188,184,191,207,215,207,195,186,172,160,152,154,150,148,147,153,161,168,180,173,177,182,188,183,195,207,211,203,195,181,168,162,166,158,150,146,148,152,160,161,168,174,179,182,187,184,184,197,202,197,190,178,175,177,172,164,159,155,155,159,161,160,168,174,180,183,191,187,187,193,194,191,182,182,189,185,181,173,164,159,160,162,164,161,160,162,171,176,200,192,184,188,193,187,180,192,193,191,187,184,173,169,169,168,166,164,160,162,161,161,200,192,185,188,193,187,181,192,194,192,187,184,174,170,170,168,167,164,161,162,161,161],
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
