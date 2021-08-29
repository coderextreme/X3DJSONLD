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
    GeoLOD(center=(41.839201031939915,-71.74725013871318,0.0),range=12301.135,child1Url=['../../tiles/4/newport14-0.x3d'],child2Url=['../../tiles/4/newport14-1.x3d'],child3Url=['../../tiles/4/newport15-0.x3d'],child4Url=['../../tiles/4/newport15-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport7-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[162,159,169,171,163,182,190,170,168,165,184,193,163,159,159,160,174,190,200,197,185,185,157,164,172,165,171,174,187,177,172,178,189,194,185,174,167,173,176,203,197,186,177,176,160,182,183,181,183,199,188,185,172,177,186,193,184,175,170,163,172,181,179,174,165,162,182,199,194,192,198,204,193,192,185,187,188,184,187,160,146,147,159,170,167,177,161,156,185,203,207,204,203,207,202,193,190,189,177,173,159,149,147,160,158,154,143,140,134,131,190,192,203,205,208,209,204,194,192,188,182,167,162,155,147,150,152,135,137,146,135,130,194,200,202,204,204,209,202,196,191,187,180,175,177,168,147,144,136,142,151,144,152,149,195,199,199,205,204,208,204,197,200,195,187,186,181,165,142,142,143,168,162,166,155,155,203,202,205,207,211,212,203,200,205,198,196,187,173,142,140,139,146,151,153,149,130,124,193,205,212,215,218,215,203,200,194,189,189,168,151,143,140,141,143,152,148,128,120,116,184,205,215,224,223,211,204,204,193,178,170,167,155,148,150,151,144,142,132,125,112,107,178,203,213,219,220,221,208,216,201,189,175,162,171,169,170,155,147,130,143,126,110,113,195,205,219,232,227,221,209,209,203,189,172,166,190,169,150,149,126,121,112,115,119,118,211,220,231,237,232,226,215,200,192,170,161,166,179,152,136,127,117,116,136,139,130,125,220,232,234,243,237,225,212,199,179,171,166,162,154,142,146,128,123,139,146,158,134,132,220,238,247,240,244,229,208,190,189,186,175,173,160,158,165,128,131,149,162,161,159,145,223,235,238,246,234,222,205,191,202,182,173,167,163,179,157,135,140,166,178,162,148,137,217,223,235,254,233,220,206,214,214,188,183,179,184,193,169,160,141,150,169,174,159,163,209,220,243,246,227,217,215,226,216,194,185,186,213,199,176,159,147,149,159,181,168,171,200,213,226,224,218,214,223,229,221,195,189,189,210,195,169,171,153,148,158,161,176,184,178,192,200,207,223,231,235,233,229,210,196,187,193,181,195,186,170,163,164,160,160,167,179,193,200,206,224,232,235,234,230,210,196,186,193,181,195,187,170,164,164,160,159,165],
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
