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
    meta(content='SantaFeExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFeExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SantaFeExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe00',url=["SantaFePrototypes.x3d#SantaFe00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe00","SantaFePrototypes.wrl#SantaFe00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe01',url=["SantaFePrototypes.x3d#SantaFe01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe01","SantaFePrototypes.wrl#SantaFe01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe02',url=["SantaFePrototypes.x3d#SantaFe02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe02","SantaFePrototypes.wrl#SantaFe02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe03',url=["SantaFePrototypes.x3d#SantaFe03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe03","SantaFePrototypes.wrl#SantaFe03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe04',url=["SantaFePrototypes.x3d#SantaFe04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe04","SantaFePrototypes.wrl#SantaFe04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe05',url=["SantaFePrototypes.x3d#SantaFe05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe05","SantaFePrototypes.wrl#SantaFe05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe06',url=["SantaFePrototypes.x3d#SantaFe06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe06","SantaFePrototypes.wrl#SantaFe06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe07',url=["SantaFePrototypes.x3d#SantaFe07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe07","SantaFePrototypes.wrl#SantaFe07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe08',url=["SantaFePrototypes.x3d#SantaFe08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe08","SantaFePrototypes.wrl#SantaFe08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe09',url=["SantaFePrototypes.x3d#SantaFe09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe09","SantaFePrototypes.wrl#SantaFe09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe10',url=["SantaFePrototypes.x3d#SantaFe10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe10","SantaFePrototypes.wrl#SantaFe10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe11',url=["SantaFePrototypes.x3d#SantaFe11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe11","SantaFePrototypes.wrl#SantaFe11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe12',url=["SantaFePrototypes.x3d#SantaFe12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe12","SantaFePrototypes.wrl#SantaFe12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe13',url=["SantaFePrototypes.x3d#SantaFe13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe13","SantaFePrototypes.wrl#SantaFe13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe14',url=["SantaFePrototypes.x3d#SantaFe14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe14","SantaFePrototypes.wrl#SantaFe14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe15',url=["SantaFePrototypes.x3d#SantaFe15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe15","SantaFePrototypes.wrl#SantaFe15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe16',url=["SantaFePrototypes.x3d#SantaFe16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe16","SantaFePrototypes.wrl#SantaFe16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe17',url=["SantaFePrototypes.x3d#SantaFe17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe17","SantaFePrototypes.wrl#SantaFe17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe18',url=["SantaFePrototypes.x3d#SantaFe18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe18","SantaFePrototypes.wrl#SantaFe18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe19',url=["SantaFePrototypes.x3d#SantaFe19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe19","SantaFePrototypes.wrl#SantaFe19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe20',url=["SantaFePrototypes.x3d#SantaFe20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe20","SantaFePrototypes.wrl#SantaFe20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe21',url=["SantaFePrototypes.x3d#SantaFe21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe21","SantaFePrototypes.wrl#SantaFe21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe22',url=["SantaFePrototypes.x3d#SantaFe22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe22","SantaFePrototypes.wrl#SantaFe22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe23',url=["SantaFePrototypes.x3d#SantaFe23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe23","SantaFePrototypes.wrl#SantaFe23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe24',url=["SantaFePrototypes.x3d#SantaFe24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe24","SantaFePrototypes.wrl#SantaFe24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe25',url=["SantaFePrototypes.x3d#SantaFe25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe25","SantaFePrototypes.wrl#SantaFe25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe26',url=["SantaFePrototypes.x3d#SantaFe26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe26","SantaFePrototypes.wrl#SantaFe26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe27',url=["SantaFePrototypes.x3d#SantaFe27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe27","SantaFePrototypes.wrl#SantaFe27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe28',url=["SantaFePrototypes.x3d#SantaFe28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe28","SantaFePrototypes.wrl#SantaFe28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe29',url=["SantaFePrototypes.x3d#SantaFe29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe29","SantaFePrototypes.wrl#SantaFe29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe30',url=["SantaFePrototypes.x3d#SantaFe30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe30","SantaFePrototypes.wrl#SantaFe30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe31',url=["SantaFePrototypes.x3d#SantaFe31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe31","SantaFePrototypes.wrl#SantaFe31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe32',url=["SantaFePrototypes.x3d#SantaFe32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe32","SantaFePrototypes.wrl#SantaFe32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe33',url=["SantaFePrototypes.x3d#SantaFe33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe33","SantaFePrototypes.wrl#SantaFe33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='SantaFe34',url=["SantaFePrototypes.x3d#SantaFe34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.x3d#SantaFe34","SantaFePrototypes.wrl#SantaFe34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.wrl#SantaFe34"]),
    Group(
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='SantaFe00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='SantaFe00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe00',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["SantaFe00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='SantaFe01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='SantaFe01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe01',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='SantaFe02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='SantaFe02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe02',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='SantaFe03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='SantaFe03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe03',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='SantaFe04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='SantaFe04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe04',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='SantaFe05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='SantaFe05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe05',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='SantaFe06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='SantaFe06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe06',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='SantaFe07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='SantaFe07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe07',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='SantaFe08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='SantaFe08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe08',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='SantaFe09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='SantaFe09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe09',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='SantaFe10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='SantaFe10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe10',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='SantaFe11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='SantaFe11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe11',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='SantaFe12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='SantaFe12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe12',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='SantaFe13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='SantaFe13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe13',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='SantaFe14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='SantaFe14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe14',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='SantaFe15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='SantaFe15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe15',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='SantaFe16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='SantaFe16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe16',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe6","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='SantaFe17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='SantaFe17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe17',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe7","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='SantaFe18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='SantaFe18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe18',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='SantaFe19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='SantaFe19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe19',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='SantaFe20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='SantaFe20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe20',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='SantaFe21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='SantaFe21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe21',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='SantaFe22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='SantaFe22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe22',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='SantaFe23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='SantaFe23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe23',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='SantaFe24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='SantaFe24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe24',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='SantaFe25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='SantaFe25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe25',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe5","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='SantaFe26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='SantaFe26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe26',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe6","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='SantaFe27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='SantaFe27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe27',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='SantaFe28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='SantaFe28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe28',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='SantaFe29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='SantaFe29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe29',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='SantaFe30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='SantaFe30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe30',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='SantaFe31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='SantaFe31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe31',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='SantaFe32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='SantaFe32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe32',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='SantaFe33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='SantaFe33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe33',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='SantaFe34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='SantaFe34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='SantaFe34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='SantaFe34',parameter=["target=_source"],url=["SantaFePrototypes.html#ProtoDeclare_SantaFe34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/SantaFePrototypes.html#ProtoDeclare_SantaFe34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["SantaFe34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SantaFeExamples.py")
