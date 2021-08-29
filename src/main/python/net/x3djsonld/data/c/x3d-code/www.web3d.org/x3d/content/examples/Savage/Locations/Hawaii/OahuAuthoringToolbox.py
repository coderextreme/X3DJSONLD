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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='OahuAuthoringToolbox.x3d',name='title'),
    meta(content='Different choices of Oahu scenes plus various author-assist prototypes.',name='description'),
    meta(content='Claude Hutton',name='creator'),
    meta(content='Okino Polytrans, Xeena VRML importer',name='translator'),
    meta(content='12 October 2002',name='created'),
    meta(content='6 November 2002',name='translated'),
    meta(content='6 November 2002',name='modified'),
    meta(content='John Locke and Matt Pritchard NPS - thank you!',name='assistance'),
    meta(content='Oahu terrain imagery',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Locations/Hawaii/OahuAuthoringToolbox.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='http://www.okino.com',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='ViewpointsGroup'),
    Switch(whichChoice=0,
      children=[
      Inline(url=["OahuCadrgIITSEC2002.wrl","https://savage.nps.edu/Savage/Locations/Hawaii/OahuCadrgIITSEC2002.wrl","OahuCadrgIITSEC2002.x3d","https://savage.nps.edu/Savage/Locations/Hawaii/OahuCadrgIITSEC2002.x3d"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OahuAuthoringToolbox.py")
