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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='CatalanArches.x3d',name='title'),
    meta(content='Draw architectural forms by Rafael Guastavino',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='9 November 2013',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TODO lecture pdf',name='reference'),
    meta(content='TODO book references',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Guastavino_tile',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Catalan_vault',name='reference'),
    meta(content='http://architecture.mit.edu/class/guastavino/news.html',name='reference'),
    meta(content='http://block.arch.ethz.ch',name='reference'),
    meta(content='http://architecture.mit.edu/class/guastavino/features/lisa/mroszczyk%20thesis.pdf',name='reference'),
    meta(content='http://vimeo.com/21965637',name='reference'),
    meta(content='Under development',name='warning'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Buildings/CatalanArches.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CatalanArches.x3d'),
    Group(
      children=[
      Shape(
        geometry=Text(string=["TODO","compute arch geometry"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.9,0.9)))),
      Shape(
        geometry=Box(size=(11,3,.001)),
        appearance=Appearance(
          material=Material(transparency=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CatalanArches.py")
